#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * rot_thirteen - encodes a string into rot13.
  * @R: string to convert
  * Return: size the output text
  */
int rot_thirteen(va_list R)
{
	int j, i, count = 0;
	char *r;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	r = va_arg(R, char *);
	if (r == NULL)
		r = "(null)";
	for (j = 0; r[j] != '\0'; j++)
	{
		for (i = 0; input[i] != '\0'; i++)
		{
			if (r[j] == input[i])
			{
				_putchar(output[i]);
				count++;
				break;
			}
		}
	}
	return (count);
}

