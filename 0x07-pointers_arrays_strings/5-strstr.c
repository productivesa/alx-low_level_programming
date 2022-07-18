#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: first string
 * @needle: second string
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		fhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack;
			pneedle++;
		}
		if (!*pneedle)
			return (fhaystack);
		haystack = fhaystack + 1;
	}
	return (0);
}

