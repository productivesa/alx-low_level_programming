#include "main.h"
/**
 * main - entry
 * print_sign - Prints if the input number >,< or 0
 * Return: 1 if n is greater than zero ,0 if n is zero or -1 if n is < 0
 * -1 is less than zero.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
