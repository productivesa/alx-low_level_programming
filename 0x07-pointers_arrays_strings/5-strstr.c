#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: first string
 * @needle: second string
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int x, z;

	for (x = 0; haystack[x] != '\0';)
	{
		for (z = 0; needle[z] != haystack[x + z])
		{
			if (needle[z] != haystack[x + z])
			{
				break;
			}
		}
		if (needle[z] == '\0')
		{
			return (haystack[x]);
		}
		x++;
	}
	return ('\0');
}

