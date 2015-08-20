BSP Directories Introduction:

Document      --    Driver reference manual and reversion history
Library       --    Driver header and source files
SampleCode	  --    Driver sample code

Sample code¡G

\SampleCode\Template            Software Development Template.

\SampleCode\M051-LB_004         Samples for M051 Learning Board.

\SampleCode\Semihost            A sample code to show how to debug with semihost message print.

\SampleCode\RegBased            The sample codes that only include driver header files and access control registers directly.

    ACMP                        This sample code shows how ACMP works with internal band-gap voltage.
    
    ADC_BurstMode               This sample code demonstrates A/D conversion with burst mode. In burst mode, ADC will sample and convert a specified channel continuously and store the conversion result in FIFO buffers.
    
    ADC_ContinuousScanMode      ADC operates in continuous scan mode and finishes two cycles of conversion for the specified channels.

    ADC_PwmTrigger              This sample code shows how to trigger ADC by PWM.
    
    ADC_ResultMonitor           This sample code demonstrates how to use the digital compare function to monitor the conversion result of channel 2.
    
    ADC_SingleCycleScanMode     In this example, ADC operates in single cycle scan mode and finishes one cycle of conversion for the specified channels.
    
    ADC_SingleMode              In this example, ADC finishes the conversion of the specified channel with single mode.
    
    EBI_NOR                     To show how to read/program external NOR Flash device (W39L040P) through EBI bus.
                                                                                                                 
    EBI_SRAM                    To show how to read/program external SRAM device (BS616LV4017) through EBI bus.  

    FMC_IAP                     To show how to call LDROM functions from APROM.
    
    FMC_MultiBoot               To show how to implement multi-boot system to boot from different applications in APROM.
    
    FMC_RW                      To show how to read/program embedded flash by ISP function.

    GPIO_EINTAndDebounce        Check EINT0/1 interrupt functions with enabling interrupt de-bounce function.   
    
    GPIO_INT                    Select two pins to test interrupt rising-edge and falling-edge functions.
    
    GPIO_OutputInput            Select two pins to test GPIO input mode and output mode.
    
    GPIO_PowerDown              Select one pin to test GPIO wake-up by GPIO interrupt.
    
    HDIV                        This sample code shows how to user divider API and how to use hardware divider by control registers.

    I2C_EEPROM                  To show how to access EEPROM by I2C interface
            
    I2C_GCMode_MASTER           Needs to work with I2C_GCMode_SLAVE. To show how a Master use I2C address 0x0 to write data to I2C Slave.
    
    I2C_GCMode_SLAVE            Needs to work with I2C_GCMode_MASTER. To show how to receive Master data in GC (General Call) mode.

    I2C_MASTER                  Needs to work with I2C_SLAVE. To show how a Master access Slave.
    
    I2C_SLAVE                   Needs to work with I2C_MASTER. To show how to set I2C in slave mode to receive the data of a Master.
    
    I2C_Wakeup_Master           Needs to work with I2C_Wakeup_Slave. To show how to wake up MCU from power down.
    
    I2C_Wakeup_Slave            Needs to work with I2C_Wakeup_Master. To show how to set I2C to wake up MCU from power down mode.
    
    PWM                         This sample code demonstrates PWM generate different frequency(Tenor C Do ~ Si)waveform.
    
    PWM_Capture                 This sample code demonstrates PWMA Channel 2 capture PWMA Channel 1 Waveform.
    
    PWM_DeadZone                This sample code demonstrates PWM Dead Zone function.
    
    PWM_DoubleBuffer            This sample code demonstrates PWM Double Buffer function.
    
    SPI_LoopBackTest            This sample code demonstrates the data transfer between a SPI master and a SPI slave.
    
    SPI_MasterFifoMode          This sample code shows how to communicate with an off-chip SPI slave device with FIFO mode.
    
    SPI_SlaveFifoMode           This sample code shows how to communicate with an off-chip SPI master device with FIFO mode.
    
    SYS                         This sample code demostartes change system clock to different PLL frequency and output system clock from CLKO(PB.8) pin. The CLKO clock frequency is system clock/4.
    
    TIMER_Capture               This sample code is showing how to use capture function on timer-1 capture input pin.
    
    TIMER_Counter               This sample code is showing how to use counter function on timer-1 counter input pin.
    
    TIMER_PeriodicINT           Enable all timer with difference clock source and set to periodic mode then check the interrupt period time is reasonable or not.
    
    TIMER_PowerDown             Use timer-0 toggle-out interrupt event to wake-up system.
    
    UART_Autoflow_Master        Needs to work with UART_Autoflow_Slave. The sample code shows how to transmit and receive data using auto flow control.
    
    UART_Autoflow_Slave         Needs to work with UART_Autoflow_Master. The sample code shows how to transmit and receive data using auto flow control.
    
    UART_IrDA_Master            Needs to work with UART_IrDA_Slave. The sample code shows how to transmit and receive data in UART IrDA mode.
    
    UART_IrDA_Slave             Needs to work with UART_IrDA_Master. The sample code shows how to transmit and receive data in UART IrDA mode.
    
    UART_LIN                    The sample code shows how to transmit LIN header and response.
    
    UART_RS485_Master           Needs to work with UART_RS485_Slave. The sample code shows how to transmit and receive data in UART RS485 mode.
       
    UART_RS485_Slave            Needs to work with UART_RS485_Master. The sample code shows how to transmit and receive data in UART RS485 mode.
    
    UART_TxRx_Function          The sample code shows how UART transmit and receive data from PC terminal through RS232 interface.
    
    WDT_PowerDown               Use WDT time-out interrupt event to wake-up system.
    
    WDT_TimeoutINT              Select one WDT time-out interval period time and check the time-out interrupt signal.
    
    WDT_TimeoutReset            Check system can be reset while WDT time-out interrupt occurred.
    
    WWDT_CompareINT             Select one WWDT window compare value then check the time-out period time and WWDT reset system can be work normally or not.
    

\SampleCode\Driver              M051 Driver Samples

    ACMP                        This sample code shows how ACMP works with internal band-gap voltage.
    
    ADC_BurstMode               This sample code demonstrates A/D conversion with burst mode. In burst mode, ADC will sample and convert a specified channel continuously and store the conversion result in FIFO buffers.
    
    ADC_ContinuousScanMode      ADC operates in continuous scan mode and finishes two cycles of conversion for the specified channels.

    ADC_PwmTrigger              This sample code shows how to trigger ADC by PWM.
    
    ADC_ResultMonitor           This sample code demonstrates how to use the digital compare function to monitor the conversion result of channel 2.
    
    ADC_SingleCycleScanMode     In this example, ADC operates in single cycle scan mode and finishes one cycle of conversion for the specified channels.
    
    ADC_SingleMode              In this example, ADC finishes the conversion of the specified channel with single mode.
    
    EBI_NOR                     To show how to read/program external NOR Flash device (W39L040P) through EBI bus.

    EBI_SRAM                    To show how to read/program external SRAM device (BS616LV4017) through EBI bus.

    FMC                         To show how to access embedded flash and switching between APROM and LDROM.    
    
    FMC_IAP                     To show how to call LDROM functions from APROM.
    
    FMC_MultiBoot               To show how to implement multi-boot system to boot from different applications in APROM.
    
    GPIO_EINTAndDebounce        Check EINT0/1 interrupt functions with enabling interrupt de-bounce function.   
    
    GPIO_INT                    Select two pins to test interrupt rising-edge and falling-edge functions.
    
    GPIO_OutputInput            Select two pins to test GPIO input mode and output mode.
    
    GPIO_PowerDown              Select one pin to test GPIO wake-up by GPIO interrupt.
    
    HDIV                        This sample code shows how to user divider API and how to use hardware divider by control registers.
    
    I2C_EEPROM                  To show how to access EEPROM by I2C interface
            
    I2C_GCMode_MASTER           Needs to work with I2C_GCMode_SLAVE. To show how a Master use I2C address 0x0 to write data to I2C Slave.
    
    I2C_GCMode_SLAVE            Needs to work with I2C_GCMode_MASTER. To show how to receive Master data in GC (General Call) mode.

    I2C_MASTER                  Needs to work with I2C_SLAVE. To show how a Master access Slave.
    
    I2C_SLAVE                   Needs to work with I2C_MASTER. To show how to set I2C in slave mode to receive the data of a Master.
    
    I2C_Wakeup_Master           Needs to work with I2C_Wakeup_Slave. To show how to wake up MCU from power down.
    
    I2C_Wakeup_Slave            Needs to work with I2C_Wakeup_Master. To show how to set I2C to wake up MCU from power down mode.
    
    PWM                         This sample code demonstrates PWM generate different frequency(Tenor C Do ~ Si)waveform.
                                                                                                                        
    PWM_Capture                 This sample code demonstrates PWMA Channel 2 capture PWMA Channel 1 Waveform.           
                                                                                                                        
    PWM_DeadZone                This sample code demonstrates PWM Dead Zone function.                                   
                                                                                                                        
    PWM_DoubleBuffer            This sample code demonstrates PWM Double Buffer function.                               
    
    SPI_LoopBackTest            This sample code demonstrates the data transfer between a SPI master and a SPI slave.
    
    SYS                         This sample code demostartes change system clock to different PLL frequency and output system clock from CLKO(PB.8) pin. The CLKO clock frequency is system clock/4.
    
    TIMER_Capture               This sample code is showing how to use capture function on timer-1 capture input pin.
    
    TIMER_Counter               This sample code is showing how to use counter function on timer-1 counter input pin.
    
    TIMER_PeriodicINT           Enable all timer with difference clock source and set to periodic mode then check the interrupt period time is reasonable or not.
    
    TIMER_PowerDown             Use timer-0 toggle-out interrupt event to wake-up system.
    
    UART_Autoflow_Master        Needs to work with UART_Autoflow_Slave. The sample code shows how to transmit and receive data using auto flow control.
    
    UART_Autoflow_Slave         Needs to work with UART_Autoflow_Master. The sample code shows how to transmit and receive data using auto flow control.
    
    UART_IrDA_Master            Needs to work with UART_IrDA_Slave. The sample code shows how to transmit and receive data in UART IrDA mode.
    
    UART_IrDA_Slave             Needs to work with UART_IrDA_Master. The sample code shows how to transmit and receive data in UART IrDA mode.
    
    UART_LIN                    The sample code shows how to transmit LIN header and response.
    
    UART_RS485_Master           Needs to work with UART_RS485_Slave. The sample code shows how to transmit and receive data in UART RS485 mode.
       
    UART_RS485_Slave            Needs to work with UART_RS485_Master. The sample code shows how to transmit and receive data in UART RS485 mode.
    
    UART_TxRx_Function          The sample code shows how UART transmit and receive data from PC terminal through RS232 interface.
    
    WDT_PowerDown               Use WDT time-out interrupt event to wake-up system.
    
    WDT_TimeoutINT              Select one WDT time-out interval period time and check the time-out interrupt signal.
    
    WDT_TimeoutReset            Check system can be reset while WDT time-out interrupt occurred.
    
    WWDT_CompareINT             Select one WWDT window compare value then check the time-out period time and WWDT reset system can be work normally or not.
    
    