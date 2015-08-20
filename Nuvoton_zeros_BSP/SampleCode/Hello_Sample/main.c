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

		
    /* Select UART and ADC module clock source */
    CLK_SetModuleClock(UART0_MODULE, CLK_CLKSEL1_UART_S_PLL, CLK_CLKDIV_UART(1));

    /*---------------------------------------------------------------------------------------------------------*/
    /* Init I/O Multi-function                                                                                 */
    /*---------------------------------------------------------------------------------------------------------*/

    /* Set P3 multi-function pins for UART0 RXD and TXD */
    SYS->P3_MFP &= ~(SYS_MFP_P30_Msk | SYS_MFP_P31_Msk);
    SYS->P3_MFP |= (SYS_MFP_P30_RXD0 | SYS_MFP_P31_TXD0);

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

/*---------------------------------------------------------------------------------------------------------*/
/* MAIN function                                                                                           */
/*---------------------------------------------------------------------------------------------------------*/

#define DELAY_TIME 300000

int main(void)
{

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
    printf("|    Nevoton Zero Hello sample Code               |\n");
    printf("+-------------------------------------------------+\n\n");
	

	while(1)
	{
			P40 = 0;  //D2 LED
			P41 = 0;	//D3 LED
			P42 = 0;	//D4 LED
			P43 = 0;	//D5 LED
			P44 = 0;	//D6 LED
			CLK_SysTickDelay(DELAY_TIME);
			P40 = 1;
			P41 = 1;
			P42 = 1;
			P43 = 1;
			P44 = 1;
			CLK_SysTickDelay(DELAY_TIME);
			P40 = 1;
			P41 = 0;
			P42 = 1;
			P43 = 0;
			P44 = 1;
			CLK_SysTickDelay(DELAY_TIME);
			P40 = 0;
			P41 = 1;
			P42 = 0;
			P43 = 1;
			P44 = 0;
			CLK_SysTickDelay(DELAY_TIME);
		}			

	
}

/*** (C) COPYRIGHT 2013 Nuvoton Technology Corp. ***/
