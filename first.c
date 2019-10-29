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
char *c;
c = va_arg(ap, char *);
while (c && c[i] != '\0')
{
_putchar(c[i]);
i++;
}
return (i);
}
/**
 * print_per - fn
 *@ap: int
 *Return: int
 */
int print_per(va_list ap)
{
(void)ap;
_putchar('%');
return (1);
}
/**
 *_printf - fn
 * @format: const
 *Return: int
 */
int _printf(const char *format, ...)
{
va_list ap;
int i = 0, j = 0, k = 0;
type1 types[] = {
{'c', print_c},
{'s', print_s},
{'%', print_per}
};
int (*p)(va_list);
va_start(ap, format);
if ((format[i] == '%' && format[i + 1] == '\0') || format == NULL)
return (-1);
while (format && format[i] != '\0')
{
if (format[i] != '%')
{
_putchar(format[i]);
k++;
}
else if (format[i] == '%')
{
i++;
for (j = 0; types[j].c; j++)
{
if (types[j].c == format[i])
p = types[j].fn;
}
if (p == NULL)
{
_putchar('%');
_putchar(format[i]);
k += 2;
}
else
k += p(ap);
}
i++;
}
va_end(ap);
return (k);
}
