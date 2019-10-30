#include "holberton.h"
#include "stdarg.h"
#include <string.h>
#include <stdio.h>
/**
 *print_c - fn -b
 *@ap: int
 *Return: int
 */
int print_c(va_list ap)
{
char c = va_arg(ap, int);
_putchar(c);
return (1);
}
/**
 *print_s - fn
 *@ap: int
 *Return: int
 */
int print_s(va_list ap)
{
int i = 0;
char *c, *nothing = "(null)";
c = va_arg(ap, char *);
if (c != NULL)
{
while (c && c[i] != '\0')
{
_putchar(c[i]);
i++;
}
}
else
{
for (i = 0; nothing[i] != '\0'; i++)
_putchar(nothing[i]);
}
return (i);
}
/**
 *_printf - fn
 * @format: const
 *Return: int
 */
int _printf(const char *format, ...)
{
va_list ap;
int i = 0, j = 0, k = 0, (*p)(va_list);
type1 types[] = {
{'c', print_c},
{'s', print_s},
{'d', print_d},
{'i', print_i}
};
va_start(ap, format);
if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
return (-1);
while (format && format[i] != '\0')
{
if (format[i] == '%')
{
for (j = 0; types[j].c; j++)
{
if (types[j].c == format[i])
p = types[j].fn;
}
if (types[j].c == '\0')
{
_putchar('%');
if (format[i + 1] != '%')
_putchar(format[i + 1]);
k += 2;
i += 2;
}
else
k += p(ap);
}
if (format[i] != '%')
{
_putchar(format[i]);
k++;
}
i++;
}
va_end(ap);
return (k);
}
