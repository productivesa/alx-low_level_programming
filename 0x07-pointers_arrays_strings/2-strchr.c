#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string
 * @src: character
 * Return: the pointer when the character is found
 */
char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	while (s[x] != '\0')
	{
		x++;
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	return ('\0');
}
