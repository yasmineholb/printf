#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  char *str = "hh";
_printf("Let's try to printf a simple sentence.\n");
_printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
_printf("Percent:[%%]\n");
_printf("Percent:[%d]\n", 5);
_printf("Percent:[%i]\n", 2);
_printf("man gcc:\n%s", str);
 _printf("%");
return (0);
}
