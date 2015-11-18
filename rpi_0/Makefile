PREFIX ?= /usr/bin
ARMGNU ?= $(PREFIX)/arm-none-eabi

SOURCES_ASM := $(wildcard *.S)
SOURCES_C   := $(wildcard *.c)

OBJS        := $(patsubst %.S,%.o,$(SOURCES_ASM))
OBJS        += $(patsubst %.c,%.o,$(SOURCES_C))

DEPENDFLAGS := -MD -MP
INCLUDES    := -I include
BASEFLAGS   := -O2 -fpic
BASEFLAGS   += -ffreestanding -mcpu=arm1176jzf-s

ASFLAGS     := $(INCLUDES) $(DEPENDFLAGS) -D__ASSEMBLY__
CFLAGS      := $(INCLUDES) $(DEPENDFLAGS) $(BASEFLAGS) $(WARNFLAGS)
CFLAGS      += -std=gnu99

all: kernel.img

include $(wildcard *.d)

kernel.elf: $(OBJS) link-arm-eabi.ld
	$(ARMGNU)-ld $(OBJS) -Tlink-arm-eabi.ld -o $@

kernel.img: kernel.elf
	$(ARMGNU)-objcopy kernel.elf -O binary kernel.img

clean:
	$(RM) -f $(OBJS) kernel.elf kernel.img

distclean: clean
	$(RM) -f *.d

# C.
%.o: %.c Makefile
	$(ARMGNU)-gcc $(CFLAGS) -c $< -o $@

# AS.
%.o: %.S Makefile
	$(ARMGNU)-gcc $(ASFLAGS) -c $< -o $@
