#include "main.h"
/**
 * print_diagonal - function draw diagonal n times
 * @n: times diagonal line is printed.
 * Return: 0
 */
void print_diagonal(int n)
{
int i;
int j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar(92);
if (i < (n - 1))
_putchar('\n');
}
_putchar('\n');
}
