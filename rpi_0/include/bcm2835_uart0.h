#ifndef _BCM2835_UART0_H_
#define _BCM2835_UART0_H_

/* The PL011 USRT is mapped on base adderss 0x7E201000 */

#define UART0_CLOCK     3000000

#define UART0_BASE		0x20201000

#define UART0_DR		0x20201000

#define UART0_RSRECR	0x20201004
#define UART0_FR		0x20201018

#define UART0_ILPR		0x20201020

#define UART0_IBRD		0x20201024

#define UART0_FBRD		0x20201028
#define UART0_LCRH		0x2020102C

#define UART0_CR		0x20201030
#define UART0_IFLS		0x20201034
#define UART0_IMSC		0x20201038

#define UART0_RIS		0x2020103C

#define UART0_MIS		0x20201040
#define UART0_ICR		0x20201044

#define UART0_DMACR		0x20201048

#define UART0_ITCR		0x20201080
#define UART0_ITIP		0x20201084
#define UART0_ITOP		0x20201088

#define UART0_TDR		0x2020108C

#endif
