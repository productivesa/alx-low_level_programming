#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - display the alpphabet
 *
 * Return: Always 0 return
 */
int main(void)
{
		int x;

		for (x = 97; x < 123; x++)
		{
		if (x != 101 && x != 113)
		{
		putchar(x);
		}
		}
		putchar('\n');
		return (0);
}
