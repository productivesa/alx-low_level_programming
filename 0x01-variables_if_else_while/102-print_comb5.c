#include <stdio.h>
/**
 * main - print possible two two degit numbers
 *
 * Return: always 0 to return
 */
int main(void)
{
int n1 = 0;
int n2;
for (; n1 <= 98; n++)
{
for (n2 = n1 + 1; n2 <= 99; n2++)
{
putchar((n1 / 10) + '0');
putchar(n1 % 10) + '0');
putchar(' ');
putchar((n2 / 10) + '0');
putchar((n2 % 10) + '0');
if (n1 == 98 && n2 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
