#include "main"
/**
 * _memcpy - copies memory area,
 * @dest:  memory area destination.
 * @src:  memory area source.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
