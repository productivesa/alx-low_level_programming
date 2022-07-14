#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @z: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *z)
{
	int len = 0, i;
	char alphab[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(z + len) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(z + len) == alphabe[i])
			{
				*(z + len) = rotrot[i];
				break;
			}
		}
		len++;
	}
	return (z);
}
