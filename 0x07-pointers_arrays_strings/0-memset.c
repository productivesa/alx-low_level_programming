#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: points to memory area
 * @n: bytes of memory
 * @b: constant byte
 * Return: pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
