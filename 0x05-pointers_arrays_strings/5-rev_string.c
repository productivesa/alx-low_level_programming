#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int i, j;
	int x = 0;
	char *len, temp;

	while (x >= 0)
	{
		if (s[x] == '\0')
			break;
		x++;
	}
	len = s;

	for (i = 0; i < (x - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(len = j);
			*(len + j) = *(len + (j - 1));
			*(len + (j - 1)) = temp;
		}
	}
}
