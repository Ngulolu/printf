#include "main.h"

/**
 *_printf - produces output according to format
 *@format: a string specifying the format to print
 *
 *Return: number of chars to print
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	length = _printf(format, args);
	va_end(args);
	return (length);
}
