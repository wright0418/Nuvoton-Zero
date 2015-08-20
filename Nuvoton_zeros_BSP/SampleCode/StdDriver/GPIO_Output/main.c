/**************************************************************************//**
 * @file     main.c
 * @version  V3.00
 * $Revision: 3 $
 * $Date: 14/01/28 11:44a $
 * @brief    M051 Series GPIO Driver Sample Code
 *
 * @note
 * Copyright (C) 2013 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#include <stdio.h>
#include "M051Series.h"


#define PLL_CLOCK           50000000


void SYS_Init(void)
{
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init System Clock                                                                                       */
    /*---------------------------------------------------------------------------------------------------------*/
    /* Enable Internal RC 22.1184MHz clock */
    CLK_EnableXtalRC(CLK_PWRCON_OSC22M_EN_Msk);

    /* Waiting for Internal RC clock ready */
    CLK_WaitClockReady(CLK_CLKSTATUS_OSC22M_STB_Msk);

    /* Switch HCLK clock source to Internal RC and HCLK source divide 1 */
    CLK_SetHCLK(CLK_CLKSEL0_HCLK_S_HIRC, CLK_CLKDIV_HCLK(1));

    /* Set core clock as PLL_CLOCK from PLL */
    CLK_SetCoreClock(PLL_CLOCK);

    /* Enable UART and ADC module clock */
    CLK_EnableModuleClock(UART0_MODULE);
		CLK_EnableModuleClock(ADC_MODULE);
		
    /* Select UART and ADC module clock source */
    CLK_SetModuleClock(UART0_MODULE, CLK_CLKSEL1_UART_S_PLL, CLK_CLKDIV_UART(1));
		CLK_SetModuleClock(ADC_MODULE, CLK_CLKSEL1_ADC_S_HIRC, CLK_CLKDIV_ADC(7));
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init I/O Multi-function                                                                                 */
    /*---------------------------------------------------------------------------------------------------------*/

    /* Set P3 multi-function pins for UART0 RXD and TXD */
    SYS->P3_MFP &= ~(SYS_MFP_P30_Msk | SYS_MFP_P31_Msk);
    SYS->P3_MFP |= (SYS_MFP_P30_RXD0 | SYS_MFP_P31_TXD0);
		
	
		/* Configure the P1.0 analog input pins */
		GPIO_DISABLE_DIGITAL_PATH(P1, 0x01);  //Disable P10 digital path for analog input
    SYS->P1_MFP &= ~(SYS_MFP_P10_Msk );
    SYS->P1_MFP |= SYS_MFP_P10_AIN0 ;

}

void UART0_Init(void)
{
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init UART                                                                                               */
    /*---------------------------------------------------------------------------------------------------------*/
    /* Reset UART */
    SYS_ResetModule(UART0_RST);

    /* Configure UART0 and set UART0 Baudrate 115200 */
    UART_Open(UART0, 115200);
}
void ADC_Init(void)
{
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init ADC Channel 0 to single end and sigle conventer mode                                                                                           */
    /*---------------------------------------------------------------------------------------------------------*/
		ADC_Open(ADC, ADC_ADCR_DIFFEN_SINGLE_END, ADC_ADCR_ADMD_SINGLE, 0x01);
		ADC_POWER_ON(ADC);  //Power ON ADC 
		ADC_CLR_INT_FLAG(ADC, ADC_ADF_INT); //Clear ADC interrupt flag
}

/**************************************************************************//**
 * 7S P3.7 6 5 4 3 2 1 0    P1.7 6 
 *      G  F A B E D x x      C  .
 * 9    0  0 0 0 1 1 1 1      0  1
 * 8    0  0 0 0 0 0 1 1      0  1
 * 7    1  1 0 0 1 1 1 1      0  1
 * 6    0  0 0 1 0 0 1 1      0  1
 * 5    0  0 0 1 1 0 1 1      0  1
 * 4    0  0 1 0 1 1 1 1      0  1
 * 3    0  1 0 0 1 0 1 1      0  1
 * 2    0  1 0 0 0 0 1 1      1  1
 * 1    1  1 1 0 1 1 1 1      0  1
 * 0    1  0 0 0 0 0 1 1      0  1
 *
 *  Digital : 0 ~ 9
 ******************************************************************************/
void seven_seg_show( uint8_t Digital)
{

	switch (Digital)
	{
		case 9:
			GPIO_SET_OUT_DATA(P3 , 0x0F);
			GPIO_SET_OUT_DATA(P1 , 0x7F);
			break;
		case 8:
			GPIO_SET_OUT_DATA(P3 , 0x00);
			GPIO_SET_OUT_DATA(P1 , 0x7F);
			break;
		case 7:
			GPIO_SET_OUT_DATA(P3 , 0xCF);
			GPIO_SET_OUT_DATA(P1 , 0x7F);
			break;
		case 6:
			GPIO_SET_OUT_DATA(P3 , 0x13);
			GPIO_SET_OUT_DATA(P1 , 0x7F);
			break;
		case 5:
			GPIO_SET_OUT_DATA(P3 , 0x1B);
			GPIO_SET_OUT_DATA(P1 , 0x7F);
			break;
		case 4:
			GPIO_SET_OUT_DATA(P3 , 0x2F);
			GPIO_SET_OUT_DATA(P1 , 0x7F);
			break;
		case 3:
			GPIO_SET_OUT_DATA(P3 , 0x4B);
			GPIO_SET_OUT_DATA(P1 , 0x7F);
			break;
		case 2:
			GPIO_SET_OUT_DATA(P3 , 0x43);
			GPIO_SET_OUT_DATA(P1 , 0xFF);
			break;
		case 1:
			GPIO_SET_OUT_DATA(P3 , 0xEF);
			GPIO_SET_OUT_DATA(P1 , 0x7F);
			break;
		case 0:
			GPIO_SET_OUT_DATA(P3 , 0x83);
			GPIO_SET_OUT_DATA(P1 , 0x7F);
			break;
	}	
		
}
/*---------------------------------------------------------------------------------------------------------*/
/* MAIN function                                                                                           */
/*---------------------------------------------------------------------------------------------------------*/

#define DELAY_TIME 10000
int main(void)
{
    int32_t i32Err,light_v;
		uint8_t P0_data ,i,j;

    /* Unlock protected registers */
    SYS_UnlockReg();

    /* Init System, peripheral clock and multi-function I/O */
    SYS_Init();

    /* Lock protected registers */
    SYS_LockReg();

    /* Init UART0 for printf */
    UART0_Init();
	

	
    printf("\n\nCPU @ %d Hz\n", SystemCoreClock);
    printf("+-------------------------------------------------+\n");
    printf("|    LED and Light (ADC) sample Code              |\n");
    printf("+-------------------------------------------------+\n\n");
	

	while(1)
	{
		ADC_START_CONV(ADC);  //Start ADC 
		
		while(!ADC_GET_INT_FLAG(ADC, ADC_ADF_INT)); // wait for ADC complete
		
		light_v = ADC_GET_CONVERSION_DATA(ADC, 0); // get ADC channel 0 data 
		
		printf("%0000d \n",light_v);
		
		seven_seg_show ((uint8_t) (light_v /150));  //Show the Light Level to 7-Segment , 9: Low Lux ,0 : High Lux
	
		P0_data =0x01;  // init LED bar show data 
		
		for (i =0 ; i <8; i++)
		{
			GPIO_SET_OUT_DATA (P0 , ~(P0_data<<i)); // LED is Low active (shift to Left)
			CLK_SysTickDelay(DELAY_TIME);
		}
		
		P0_data =0x80;  // init LED bar show data 
		for (i = 0 ; i <8; i++)
		{
			GPIO_SET_OUT_DATA (P0 , ~(P0_data>>i)); // LED is Low active (shift to Right)
			CLK_SysTickDelay(DELAY_TIME);
		}			

	}
	
    while(1);
}

/*** (C) COPYRIGHT 2013 Nuvoton Technology Corp. ***/
