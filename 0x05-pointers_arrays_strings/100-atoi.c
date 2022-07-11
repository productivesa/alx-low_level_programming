#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int i, x;
	int len = 0;
	int a = 0;
	int b = 1;
	int c = 1;

	while (*(s + x) != '\0')
	{
		if (len > 0 && (*(s + x) < '0' || *(s + x) > '9'))
			break;
		if (*(s + x) == '-')
			b *= -1;
		if ((*(s + x) >= '0') && (*(s + x) <= '9'))
		{
			if (len > 0)
				c *= 10;
			len++;
		}
		x++;
	}
	for (i = x - len; i < x; i++)
	{
		a = a + ((*(s + i) - 48) * m);
		c /= 10;
	}
	return (a * b);
}
