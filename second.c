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

/**
 *print_R - fn
 *@ap: param
 *Return: int
 */
int print_R(va_list ap)
{
int x = 0, y = 0, i = -1, k = 0, p;
char *n;
char m[] = "ANBOCPDQERFSGTHUIVJWKXLYMZanbocpdqerfsgthuivjwkxlymz";
n = va_arg(ap, char *);
for (x = 0; n[x]; x++)
{
i = 1;
for (y = 0; n[x] != m[y] && y < 52; y++)
{
i = (i * -1);
}
if (n[x] == m[y])
{
n[x] = (n[x] + (13 * i));
}
}
for (p = 0; n[p]; p++)
{
k += _putchar(n[p]);
}
return (k);
}

