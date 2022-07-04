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
putchar((i % 10) + 10);
for (x = 'a'; x < '7'; x++)
putchar(x);
putchar('\n')
return (0);
}


