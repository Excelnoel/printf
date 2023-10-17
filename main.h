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
int noncustomspecifier(va_list args, char c, char *buffer, int *tb, int *b);
int getflags(const char *format, int *i);
int getprecision(const char *format, int *i, va_list list);
int getsize(const char *format, int *i);
int getwidth(const char *format, int *i, va_list list);


/**int hexadecimal(va_list h)
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif /* HOLBERTONH */

