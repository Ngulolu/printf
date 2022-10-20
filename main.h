#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stddef.h>

typedef struct printer
{
	char *symbol;
	int (*print)(va_list args);

}prints;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int print_string(va_list args);

#endif
