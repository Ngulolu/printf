#include "main.h"

/**
*print_string - prints a string
*@args: list of arguments pointing to a string
*
*Return: length of a string
*/

int print_string(va_list args)
{
	char *str;
	int len = 0, i;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (*str != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		(_putchar(*(str + i)));
	}

	return (len);

}
