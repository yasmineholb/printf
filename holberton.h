#ifndef file
#define file
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
*struct type1 - struct
*@c: char
*@fn: pointer
*/

typedef struct type1
{
char c;
int (*fn)();
} type1;
int _printf(const char *format, ...);
int print_c(va_list ap);
int print_s(va_list ap);
int print_per(va_list ap);
int _putchar(char c);
int print_d(va_list d);
int print_i(va_list i);
int print_R(va_list ap);

#endif
