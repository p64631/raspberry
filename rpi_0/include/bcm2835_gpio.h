#ifndef _BCM2835_GPIO_H_
#define _BCM2835_GPIO_H_

/* The GPIO has 41 registers */

#define GPFSEL0	 		0x20200000
#define GPFSEL1 		0x20200004	//GPIO Function Select 1
#define GPFSEL2	 		0x20200008
#define GPFSEL3	 		0x2020000C
#define GPFSEL4	 		0x20200010
#define GPFSEL5	 		0x20200014
//#define Reserved 		0x20200018
#define GPSET0  		0x2020001C	//GPIO Pin Output Set 0
#define GPSET1  		0x20200020
//#define Reserved 		0x20200024
#define GPCLR0  		0x20200028	//GPIO Pin Output Clear 0
#define GPCLR1  		0x2020002C
//#define Reserved 		0x20200030
#define GPLEV0	 		0x20200034
#define GPLEV1	 		0x20200038
//#define Reserved		0x2020003C
#define GPEDS0	 		0x20200040
#define GPEDS1	 		0x20200044
//#define Reserved		0x20200048
#define GPREN0	 		0x2020004C
#define GPREN1	 		0x20200050
//#define Reserved		0x20200054
#define GPFEN0	 		0x20200058
#define GPFEN1	 		0x2020005C
//#define Reserved		0x20200060
#define GPHEN0	 		0x20200064
#define GPHEN1	 		0x20200068
//#define Reserved		0x2020006C
#define GPLEN0	 		0x20200070
#define GPLEN1	 		0x20200074
//#define Reserved		0x20200078
#define GPAREN0	 		0x2020007C
#define GPAREN1	 		0x20200080
//#define Reserved		0x20200084
#define GPAFEN0	 		0x20200088
#define GPAFEN1	 		0x2020008C
//#define Reserved		0x20200090
#define GPPUD    	  	0x20200094	//GPIO Pin Pull-up/down Enable
#define GPPUDCLK0  		0x20200098	//GPIO Pin Pull-up/down Enable Clock 0
#define GPPUDCLK1		0x2020009C
//#define Reserved		0x202000A0
//#define Test	 		0x202000B0

#endif
