#include "main.h"
/**
 * _strcmp - function that comapres two strings
 * @s1: string one
 * @s2: string two
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
		int i = 0, z = 0;

		while (z == 0)
		{
			if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
				break;
			z = *(s1 + i) - *(s2 + i);
			i++;
		}
		return (z);
}
