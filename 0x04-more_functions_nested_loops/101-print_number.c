#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
unsigned int m, d, count;

if (n < 0)
{
_putchar(45);
a = n * -1;
}
else
{
a = n;
}

b = a;
c = 1;

while (b > 9)
{
b /= 10;
c *= 10
}

for (; count >= 1; count /= 10)
{
_putchar(((m / count) % 10) + 48);
}
}
