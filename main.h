#ifndef MAINH
#define MAINH

#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int character(va_list c);
int string(va_list s);
int integer(va_list i);
int decimal(va_list d);
int revolver(va_list r);
int binary(va_list b);
int un_signed(va_list u);
int octal(va_list o);
int little_x(va_list x);
int big_x(va_list X);
int rot_thirteen(va_list R);
int unsignedint(unsigned int n, char *buff, int *tb, int *b, char t);
int handlestr(char *s, char *buffer, int *tb, int *b);
int handleint(int n, char *buffer, int *tb, int *b);

/**
 * struct my_struct - type defination of the structure of struct code_format
 * @sc: The specifiers
 * @f: The function associated
 * Description: Longer description
 */
typedef struct my_struct
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif /* HOLBERTONH */

