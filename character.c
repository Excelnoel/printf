#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * character - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1.
 */
int character(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}
/**
 * print_porcentage - %
 *
 * Return: 1.
 */
int print_percentage(void)
{
	_putchar('%');
	return (1);
}

