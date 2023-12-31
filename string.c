#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * string - writes the character c to stdout
 * @s: The string to print
 *
 * Return: 1.
 */
int string(va_list s)
{
	char *my_string;
	int  i = 0;

	my_string = va_arg(s, char *);
	if (my_string == NULL)
		my_string = "(null)";
	while (my_string[i])
	{
		_putchar(my_string[i]);
		i++;
	}
	return (i);
}

