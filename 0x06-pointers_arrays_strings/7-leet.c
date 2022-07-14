#include "main.h"
/**
 * leet - encodes a string into 1337
 * @z: input string.
 * Return: the pointer to dest.
 */
char *leet(char *z)
{
		int i, x;
		int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
		int replacer[] = {'4', '3', '0', '7', '1'};

		for (i = 0; z[i] != '\0'; i++)
		{
			for (x = 0; x <= 9; x++)
			{
				if (z[i] == find[x])
				{
					z[i] = replacer[x / 2];
					x = 9;
				}
			}
		}
		return (z);
}
