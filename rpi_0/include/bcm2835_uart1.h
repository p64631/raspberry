#ifndef _BCM2835_UART1_H_
#define _BCM2835_UART1_H_


/* One mini UART and two SPI masters */
#define GPIO_BASE				0x20200000

#define UART1_BASE				0x20215000	
/* Auxiliary */
#define AUX_IRQ					0x20215000	// Auxiliary Interrupt status	
#define AUX_ENABLES     		0x20215004	// Auxiliary enables
/* Mini Uart */
#define AUX_MU_IO_REG   		0x20215040	// Mini Uart I/O Data
#define AUX_MU_IER_REG  		0x20215044	// Mini Uart Interrupt Enable
#define AUX_MU_IIR_REG  		0x20215048	// Mini Uart Interrupt Identify
#define AUX_MU_LCR_REG  		0x2021504C	// Mini Uart Line Control
#define AUX_MU_MCR_REG 			0x20215050	// Mini Uart Modem Control
#define AUX_MU_LSR_REG  		0x20215054	// Mini Uart Line Status
#define AUX_MU_MSR_REG  		0x20215058	// Mini Uart Modem Status
#define AUX_MU_SCRATCH  		0x2021505C	// Mini Uart Scratch
#define AUX_MU_CNTL_REG 		0x20215060	// Mini Uart Extra Control
#define AUX_MU_STAT_REG 		0x20215064	// Mini Uart Extra Status
#define AUX_MU_BAUD_REG 		0x20215068	// Mini Uart Baudrate
/* SPI 1 */
#define AUX_SPI0_CNTL0_REG		0x20215080
#define AUX_SPI0_CNTL1_REG		0x20215084
#define AUX_SPI0_STAT_REG		0x20215088
#define AUX_SPI0_IO_REG			0x20215090
#define AUX_SPI0_PEEK_REG		0x20215094
/* SPI 2 */
#define AUX_SPI1_CNTL0_REG		0x202150C0
#define AUX_SPI1_CNTL1_REG		0x202150C4
#define AUX_SPI1_STAT_REG		0x202150C8
#define AUX_SPI1_IO_REG			0x202150D0
#define AUX_SPI1_PEEK_REG		0x202150D4

#endif
