#include "main.h"
/**
 * _strspn - gets the prifix length substring
 * @s: initial segment
 * @accept: bytes to accept.
 * Return: number of bytes
 */
unsigned int  _strspn(char *s, char *accept)
{
	int length = 0;
	int x = 0;
	int z = 0;

	while (s[x] != '\0')
	{
		while (accept[z] != '\0')
		{
			if (accept[z] == s[x])
			{
				length++;
			}
			z++;
		}
		z = 0;
		x++;
		if (s[x] == ' ')
		{
			break;
		}
	}
	return (length);
}
