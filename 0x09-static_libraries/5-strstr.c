#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: first string
 * @needle: second string
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
		int i;
		int j;

		for (i = 0; haystack[i] != '\0';)
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
				{										break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
			i++;
		}
		return ('\0');
}

