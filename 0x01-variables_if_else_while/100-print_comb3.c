#include <stdio.h>
/**
 * main - Print all posible 2 degits
 *
 * Return: always 0 to return
 */
int main(void)
{
int num1 = 0;
int num2;
for (; num1 < 9; num1++)
{
for (num2 = num1 + 1; num2 < 10; num2++)
{
putchar((num1 % 10) + '0');
putchar((num2 % 10) + '0');
if (num1 == 8 and num2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
