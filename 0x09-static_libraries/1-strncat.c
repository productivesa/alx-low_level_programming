#include "main.h"
/**
 * _strncat - concatenate two string
 * @dest: the destination paraeter
 * @src: the source parameter
 * @n: bytes
 * Return: pointer rsulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;

	while (*(dest + len1) != '\0')
	{
		len1++;
	}
	while (len2 < n)
	{
		*(dest + len1) = *(src + len2);
		if (*(src + len2) == '\0')
			break;
		len1++;
		len2++;
	}
	return (dest);
}

