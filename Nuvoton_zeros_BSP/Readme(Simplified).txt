开发包目录说明：

Document      --    放置本开发包提供的驱动说明文件与版本修订纪录文件
Library       --    放置所有驱动的源代码，包括CMSIS, 标准驱动与 M051 学习板的相关驱动
SampleCode	  --    原厂提供的范例程序源码，包括了标准驱动的使用范例与 M051 学习板的范例程序

范例程序：

\SampleCode\Template            开发模板

\SampleCode\M051-LB_004         M051学习板用的范例程序

\SampleCode\Semihost            演示如何利用 Semihost 的方式来显示调试讯息

\SampleCode\RegBased            提供只引用 Driver Header 档，并直接存取控制暂存器的 Sample Code

    ACMP                        演示 ACMP 搭配内部 Band-gap 电压的使用
    
    ADC_BurstMode               演示如何使用 ADC 的 burst mode 来进行类比转换
    
    ADC_ContinuousScanMode      演示如何使用 ADC 的 Continuous Scan Mode.
    
    ADC_PwmTrigger              演示如何用 PWM 来触发 ADC 的转换
    
    ADC_ResultMonitor           演示如何使用 ADC 的比较功能来监控 ADC 的转换结果
    
    ADC_SingleCycleScanMode     演示如何使用 ADC 的 Single Cycle Scan Mode 来转换类比讯号
    
    ADC_SingleMode              演示如何使用 ADC 的 Single Mode 来转换类比讯号
    
    EBI_NOR                     演示如何透过 EBI 接口来控制和读写 NOR Flash - W39L040P
    
    EBI_SRAM                    演示如何透过 EBI 接口来读写 SRAM Flash - BS616LV4017
    
    FMC_IAP                     演示如何在 APROM 执行程序时,呼叫存放在 LDROM 内的函数
    
    FMC_MultiBoot               演示如何实现在 APROM 中,同时存放多个独立的应用程序, 并任意选择要用哪个应用程序开机
    
    FMC_RW                      演示如何利用 ISP 功能，读写 Embedded Flash
    
    GPIO_EINTAndDebounce        演示如何使用外部中断 EINT0 与 EINT1，也演示如何搭配 debounce 功能           
                                                                                                            
    GPIO_INT                    演示如何设定管脚中断，包括正缘触发或负缘触发                                
                                                                                                            
    GPIO_OutputInput            演示管脚的输出、输入模式设定                                                
                                                                                                            
    GPIO_PowerDown              演示如何使用 GPIO 来从 Power Down 模式下唤醒系统                            
    
    HDIV                        演示除法函数的使用与直接使用硬体除法器                                                         
                                                                                                                               
    I2C_EEPROM                  演示如何利用I2C来存取 EEPROM                                                                   
                                                                                                                               
    I2C_GCMode_Master           搭配 I2C_GCMode_SLAVE 使用, 演示 I2C Master 利用位址 0x0 来写资料到 Slave 端                   
                                                                                                                               
    I2C_GCMode_Slave            搭配 I2C_GCMode_MASTER 使用, 演示 I2C Slave 在 GC (General Call) 模式下, 接收 Master 端的资料  
                                                                                                                               
    I2C_Master                  搭配 I2C_SLAVE, 演示用不同的 I2C 位址, 写资料到 Slave 端                                       
                                                                                                                               
    I2C_Slave                   搭配 I2C_MASTER, 演示如何设定 I2C 位址, 接受由 Master 传来的资料                               
                                                                                                                               
    I2C_Wakeup_Master           搭配 I2C_Wakeup_Slave 使用, 演示如何利用 I2C 将 MCU 由 Power Down 模式下唤醒                  
                                                                                                                               
    I2C_Wakeup_Slave            搭配 I2C_Wakeup_Master 使用, 演示如何设定 I2C, 使 MCU 从 Power Down 模式下经由 I2C 来唤醒   
    
    PWM                         演示如何使用 PWM 产生不同的频率
                                                               
    PWM_Capture                 演示 PWM 的 Capture 功能       
                                                               
    PWM_DeadZone                演示 PWM 的 Dead Zone 功能     
                                                               
    PWM_DoubleBuffer            演示 PWM 的 Double Buffer 功能 
    
    SPI_MasterFifoMode          搭配 SPI_SlaveFifoMode, 演示 SPI Master 透过 FIFO 与 SPI Slave 进行资料收送
    
    SPI_SlaveFifoMode           搭配 SPI_MasterFifoMode, 演示 SPI Slave 透过 FIFO 与 SPI Master 进行资料收送
    
    SYS                         演示如何改变 PLL 与系统频率，及如何输出系统频率到晶片外                            
                                                                                                                   
    TIMER_Capture               演示如何使用 TIMER 的 Capture 功能                                                 
                                                                                                                   
    TIMER_Counter               演示如何使用 TIMER 的 Counter 功能                                                 
                                                                                                                   
    TIMER_PeriodicINT           演示如何使用 TIMER 的 Periodic Mode，以及如何使用不同的 TIMER 时脉来源             
                                                                                                                   
    TIMER_PowerDown             演示如何使用 TIMER 中断事件来唤醒系统                                              
                                                                                                                   
    UART_Autoflow_Master        搭配 UART_Autoflow_Slave，演示利用 auto flow control 的功能来与 Slave 收送资料     
                                                                                                                   
    UART_Autoflow_Slave         搭配 UART_Autoflow_Master，演示利用 auto flow control 的功能来与 Master 收送资料    
                                                                                                                   
    UART_IrDA_Master            搭配 UART_IrDA_Slave, 演示如何利用 UART 的 IrDA 模式来收送资料                     
                                                                                                                   
    UART_IrDA_Slave             搭配 UART_IrDA_Master, 演示如何利用 UART 的 IrDA 模式来收送资料                    
                                                                                                                   
    UART_LIN                    演示如何送出 LIN header 与 response                                                
                                                                                                                   
    UART_RS485_Master           搭配 UART_RS485_Slave, 演示用如何用 UART RS485 模式来收送资料                      
                                                                                                                   
    UART_RS485_Slave            搭配 UART_RS485_Master, 演示用如何用 UART RS485 模式来收送资料                      
    
    UART_TxRx_Function          用一个简单的 UART echo 程序，演示如何设定 UART，使用基本的收送功能.
    
    WDT_PowerDown               演示如何用 WDT 中断事件来唤醒系统                         
                                                                                          
    WDT_TimeoutINT              演示如何设定 WDT 并与实现 WDT 到时中断处理函数            
                                                                                          
    WDT_TimeoutReset            演示 WDT 到时重置的机制                                   
                                                                                          
    WWDT_CompareINT             演示如何使用 WWDT，包括到时的周期与到时的系统重置         


\SampleCode\StdDriver           本目录放置所有 M051 驱动范例

    ACMP                        演示 ACMP 搭配内部 Band-gap 电压的使用
    
    ADC_BurstMode               演示如何使用 ADC 的 burst mode 来进行类比转换
    
    ADC_ContinuousScanMode      演示如何使用 ADC 的 Continuous Scan Mode.

    ADC_PwmTrigger              演示如何用 PWM 来触发 ADC 的转换
    
    ADC_ResultMonitor           演示如何使用 ADC 的比较功能来监控 ADC 的转换结果
    
    ADC_SingleCycleScanMode     演示如何使用 ADC 的 Single Cycle Scan Mode 来转换类比讯号
    
    ADC_SingleMode              演示如何使用 ADC 的 Single Mode 来转换类比讯号
    
    EBI_NOR                     演示如何透过 EBI 接口来控制和读写 NOR Flash - W39L040P

    EBI_SRAM                    演示如何透过 EBI 接口来读写 SRAM Flash - BS616LV4017

    FMC                         演示如何透过 ISP 介面读写内存与如何在 LDROM 与 APROM 间切换
    
    FMC_IAP                     演示如何在 APROM 执行程序时,呼叫存放在 LDROM 内的函数
    
    GPIO_EINTAndDebounce        演示如何使用外部中断 EINT0 与 EINT1，也演示如何搭配 debounce 功能
    
    GPIO_INT                    演示如何设定管脚中断，包括正缘触发或负缘触发
    
    GPIO_OutputInput            演示管脚的输出、输入模式设定
    
    GPIO_PowerDown              演示如何使用 GPIO 来从 Power Down 模式下唤醒系统

    HDIV                        演示除法函数的使用与直接使用硬体除法器
    
    I2C_EEPROM                  演示如何利用I2C来存取 EEPROM
            
    I2C_GCMode_MASTER           搭配 I2C_GCMode_SLAVE 使用, 演示 I2C Master 利用位址 0x0 来写资料到 Slave 端
    
    I2C_GCMode_SLAVE            搭配 I2C_GCMode_MASTER 使用, 演示 I2C Slave 在 GC (General Call) 模式下, 接收 Master 端的资料

    I2C_MASTER                  搭配 I2C_SLAVE, 演示用不同的 I2C 位址, 写资料到 Slave 端
    
    I2C_SLAVE                   搭配 I2C_MASTER, 演示如何设定 I2C 位址, 接受由 Master 传来的资料
    
    I2C_Wakeup_Master           搭配 I2C_Wakeup_Slave 使用, 演示如何利用 I2C 将 MCU 由 Power Down 模式下唤醒
    
    I2C_Wakeup_Slave            搭配 I2C_Wakeup_Master 使用, 演示如何设定 I2C, 使 MCU 从 Power Down 模式下经由 I2C 来唤醒
    
    PWM                         演示如何使用 PWM 产生不同的频率
    
    PWM_Capture                 演示 PWM 的 Capture 功能
    
    PWM_DeadZone                演示 PWM 的 Dead Zone 功能
    
    PWM_DoubleBuffer            演示 PWM 的 Double Buffer 功能
    
    SPI_LoopBackTest            使用 loopback 方式演示 SPI Master 与 Slave 间的资料收送
    
    SYS                         演示如何改变 PLL 与系统频率，及如何输出系统频率到晶片外
    
    TIMER_Capture               演示如何使用 TIMER 的 Capture 功能
    
    TIMER_Counter               演示如何使用 TIMER 的 Counter 功能
    
    TIMER_PeriodicINT           演示如何使用 TIMER 的 Periodic Mode，以及如何使用不同的 TIMER 时脉来源
    
    TIMER_PowerDown             演示如何使用 TIMER 中断事件来唤醒系统
    
    UART_Autoflow_Master        搭配 UART_Autoflow_Slave，演示利用 auto flow control 的功能来与 Slave 收送资料
    
    UART_Autoflow_Slave         搭配 UART_Autoflow_Master，演示利用 auto flow control 的功能来与 Master 收送资料
    
    UART_IrDA_Master            搭配 UART_IrDA_Slave, 演示如何利用 UART 的 IrDA 模式来收送资料
    
    UART_IrDA_Slave             搭配 UART_IrDA_Master, 演示如何利用 UART 的 IrDA 模式来收送资料
    
    UART_LIN                    演示如何送出 LIN header 与 response
    
    UART_RS485_Master           搭配 UART_RS485_Slave, 演示用如何用 UART RS485 模式来收送资料
       
    UART_RS485_Slave            搭配 UART_RS485_Master, 演示用如何用 UART RS485 模式来收送资料
    
    UART_TxRx_Function          用一个简单的 UART echo 程序，演示如何设定 UART，使用基本的收送功能.
    
    WDT_PowerDown               演示如何用 WDT 中断事件来唤醒系统
    
    WDT_TimeoutINT              演示如何设定 WDT 并与实现 WDT 到时中断处理函数
    
    WDT_TimeoutReset            演示 WDT 到时重置的机制
    
    WWDT_CompareINT             演示如何使用 WWDT，包括到时的周期与到时的系统重置
    
    