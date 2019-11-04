#include "holberton.h"
#include "stdarg.h"
#include <string.h>
#include <stdio.h>
/**
 *print_d - fn -b
 *@ap: int
 *Return: int
 */
int print_d(va_list ap)
{
int a[10];
int j, m, n, z, k;
n = va_arg(ap, int);
k = 0;
m = 1000000000;
a[0] = n / m;
for (j = 1; j < 10; j++)
{
m /= 10;
a[j] = (n / m) % 10;
}
if (n < 0)
{
_putchar('-');
k++;
for (j = 0; j < 10; j++)
a[j] *= -1;
}
for (j = 0, z = 0; j < 10; j++)
{
z += a[j];
if (z != 0 || j == 9)
{
_putchar('0' + a[j]);
k++;
}
}
return (k);
}

/**
 *print_i - fn -b
 *@ap: int
 *Return: int
 */
int print_i(va_list ap)
{
int a[10];
int j, m, n, z, k;
n = va_arg(ap, int);
k = 0;
m = 1000000000;
a[0] = n / m;
for (j = 1; j < 10; j++)
{
m /= 10;
a[j] = (n / m) % 10;
}
if (n < 0)
{
_putchar('-');
k++;
for (j = 0; j < 10; j++)
a[j] *= -1;
}
for (j = 0, z = 0; j < 10; j++)
{
z += a[j];
if (z != 0 || j == 9)
{
_putchar('0' + a[j]);
k++;
}
}
return (k);
}
