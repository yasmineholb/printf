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
* getspecifier - fn
* @x: param
* Return: int
*/
int(*getspecifier(char x))(va_list)
{
int i;
type1 p[] = {
{'c', print_c},
{'s', print_s},
{'i', print_i},
{'d', print_i},
{'R', print_R},
{'p', print_p},
{'\0', '\0'}
};
for (i = 0; p[i].c; i++)
{
if (p[i].c == x)
{
return (p[i].fn);
}
}
return (0);
}
/**
 *_printf - fn
 * @format: const
 *Return: int
 */
int _printf(const char *format, ...)
{
unsigned int k = 0, i = 0;
int  (*fn)(va_list);
va_list ap;
if (format == NULL)
return (-1);
va_start(ap, format);
while (format && format[i])
{
if (format[i] != '%')
{
_putchar(format[i]);
k++;
}
else if (format[i] == '%' && format[i + 1] == '\0')
return (-1);
else if (format[i] == '\0')
return (k);
else if (format[i] == '%')
{
fn = getspecifier(format[i + 1]);
i += 1;
if (fn == NULL)
{
if (format[i] != '%')
{
_putchar(format[i - 1]);
k += 1;
}
_putchar(format[i]);
k += 1;
}
else
k = k + fn(ap);
}
i++;
}
va_end(ap);
return (k);
}
