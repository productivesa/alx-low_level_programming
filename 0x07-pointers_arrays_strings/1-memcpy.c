#include "main.h"
/**
 * _memcpy - copies memory area
 * @des: memory area destination
 * @src: constant byte
 * @n: bytes filled
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
