ENTRY(Start)

SECTIONS
{
    . = 0x8000;
	. = ALIGN(4);
	
    _start = .;
    
	. = ALIGN(4);
	_text_start = .;
    .text :
    {
        KEEP(*(.text.boot))
        *(.text)
    }
    . = ALIGN(4); 
    _text_end = .;

	
	. = ALIGN(4);
    _rodata_start = .;
    .rodata :
    {
        *(.rodata)
    }
    . = ALIGN(4); 
    _rodata_end = .;

	
	. = ALIGN(4);
    _data_start = .;
    .data :
    {
        *(.data)
    }
    . = ALIGN(4); 
    _data_end = .;

	
	. = ALIGN(4);
    _bss_start = .;
    .bss :
    {
        bss = .;
        *(.bss)
    }
    . = ALIGN(4); 
    _bss_end = .;
	
	
	
    _end = .;
}