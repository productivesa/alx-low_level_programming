#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int i;
	int x = 0;

	while (x >= 0)
	{
		if  (str[x] == '\0')
			break;
		x++;
	}
	if (x % 2 == 1)
		i = x / 2;
	else
		i = (x - 1) / 2;
	for (i++; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
