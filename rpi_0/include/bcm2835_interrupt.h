#ifndef _BCM2835_INTERRUPT_H_
#define _BCM2835_INTERRUPT_H_

/* Interrupt */
#define TOTAL_IRQ		64 + 8 // 32 + 32 + 8 = 72

#define BASE_INTC			0x2000B200

#define INTC_IRQ_BASIC		0x2000B200
#define IRQ_PENDING1		0x2000B204
#define IRQ_PENDING2		0x2000B208
#define IRQ_FIQ_CTRL		0x2000B20C
#define IRQ_ENABLE1			0x2000B210
#define IRQ_ENABLE2			0x2000B214
#define IRQ_ENABLE_BASIC	0x2000B218
#define IRQ_DISABLE1		0x2000B21C
#define IRQ_DISABLE2		0x2000B220
#define IRQ_DISABLE_BASIC	0x2000B224

/* 32 + 32  */
#define ID_AUX			29
#define ID_SPI_SLAVE 	43
#define ID_PWA0			45
#define ID_PWA1		   	46
#define ID_SMI 			48
#define ID_GPIO_0 		49
#define ID_GPIO_1 		50
#define ID_GPIO_2 		51
#define ID_GPIO_3 		52
#define ID_I2C 			53
#define ID_SPI 			54
#define ID_PCM 			55
#define ID_UART 		57
/* 32 + 32 + 8 */
#define ID_TIMER_0 		64
#define ID_MAILBOX_0	65
#define ID_DOORBELL_0 	66
#define ID_DOORBELL_1 	67
#define ID_GPU0_HALTED 	68


#endif
