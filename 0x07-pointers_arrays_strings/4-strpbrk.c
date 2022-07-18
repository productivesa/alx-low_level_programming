#include "main.h"
/**
 * _strpbrk - search a string for any set of bit
 * @s: pointer
 * @accept: string pointer
 * Return: a pointer to the byte that match bytes
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, z;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (z = 0; *(accept + z) != '\0'; z++)
		{
			if (*(s + x) == *(accept + z))
				return (s + x);
		}
	}
	return ('\0');
}
