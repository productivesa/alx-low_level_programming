#include <stdio.h>
/**
 * main - entry
 *
 * Return: always 0
 */
int main(void)
{
char x;
int i;
for (i = 0; i < 10; i++)
putchar((i % 10) + '0');
for (x = 'a'; x < 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}


