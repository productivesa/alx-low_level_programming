#include "main.h"

/**
 * _strlen - Return the length of string.
 * @s: an input string
 * Return: return the length
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}
