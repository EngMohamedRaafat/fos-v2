/* See COPYRIGHT for copyright information. */

#ifndef _CONSOLE_H_
#define _CONSOLE_H_
#ifndef FOS_KERNEL
#error "This is a FOS kernel header; user programs should not #include it"
#endif

#include <inc/types.h>

#define MONO_BASE 0x3B4
#define MONO_BUF 0xB0000
#define CGA_BASE 0x3D4
#define CGA_BUF 0xB8000

#define CRT_ROWS 25
#define CRT_COLS 80
#define CRT_SIZE (CRT_ROWS * CRT_COLS)

void console_initialize(void);
void cons_putc(int c);
int cons_getc(void);

void kbd_intr(void);    // irq 1
void serial_intr(void); // irq 4

#endif /* _CONSOLE_H_ */
