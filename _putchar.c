#include <unistd.h>
#include <stdio.h>

/**
 *_putchar - writes the character c to stdout
 *@c - the character to print
 *Return: Always on success
 *On error -1 and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}