#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;

	while (*(dest + len1) != '\0')
	{
		len1++;
	}
	while (len2 >= 0)
	{
		*(dest + len1) = *(src + len2);
		if (*(src + len2) == '\0')
			break;
		len1++;
		len2++;
	}
	return (dest);
}

