#include "main.h"

/**
*print_char - a function that prints any character in an argument given
*@args: list of arguments pointing to any character
*
*Return: len of any character
*
*/

int print_char(va_list args)
{
	char n;

	n = va_arg(args, int);

	(_putchar(n));
	return (1);
}
