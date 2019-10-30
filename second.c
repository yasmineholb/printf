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
char *ch = va_arg(ap, char *);
int i, j, k = 0;
char ab[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char yz[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; ch[i] != '\0'; i++)
{
j = 0;
while ((ab[j] != '\0') && (ch[i] != ab[j]))
{
j++;
}
if (ch[i] == ab[j])
{
_putchar(yz[j]);
k++;
}
else if (ab[j] == '\0')
{
_putchar(ch[i]);
k++;
}
}
return (k);
}
/**
 *print_p - fn
 *@ap: param
 *Return: int
 */
int print_p(va_list ap)
{
unsigned long ch[30], n = 0;
unsigned int k = 0;
int i = 0;
n = va_arg(ap, unsigned long);
if (n == 0)
{
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
k += 5;
}
else if (n > 0)
{
_putchar('0');
_putchar('x');
k += 2;
while (n > 0)
{
if (n % 16 >= 10 && n % 16 <= 15)
ch[i] = 87 + (n % 16);
else
ch[i] = 48 + (n % 16);
n = n / 16;
i++;
}
for (--i; i >= 0; i--)
{
_putchar(ch[i]);
k++;
}
}
return (k);
}
