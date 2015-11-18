#ifndef _BCM2835_TIMER_H_
#define _BCM2835_TIMER_H_

/* System Timer Registers */
#define STIMER_BASE	0x20003000

#define CS	 		0x20003000	//timer control state
#define CLO 		0x20003004	//low timer counter register
#define CHI			0x20003008	//hight timer counter registe

#define C0 			0x2000300C	//gpu time conter
#define C1 			0x20003010	//cpu time conter
#define C2 			0x20003014	//gpu time conter
#define C3 			0x20003018	//cpu time conter

/* Timer Registers */
//#define TIMER_BASE 		0x2000B0000

#define TIMER_LOAD 		0x2000B400
#define TIMER_VALUE 	0x2000B404
#define TIMER_CONTROL 	0x2000B408
#define TIMER_IRQ 		0x2000B40C
#define TIMER_RAWIRQ 	0x2000B410
#define TIMER_MIRQ	 	0x2000B414
#define TIMER_RELOAD 	0x2000B418

//#define Pre-divider 	0x2000B41C
//#define Free counte 	0x2000B420

#endif
