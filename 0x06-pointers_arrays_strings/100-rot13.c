#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @z: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *z)
{
	int i = 0, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
		while (z[i] != '\0)'
		{
			j = 0;
			while (alpha[j] != '\0')
			{
				if (z[i] == alpha[j])
				{
					z[i] = rot[j]
						break;
				}
				j++;
			}i++;
		}
		return (z);
}
