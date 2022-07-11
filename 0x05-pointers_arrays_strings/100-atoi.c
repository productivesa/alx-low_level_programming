#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int count = 1;
	unsigned int nb = 0;
	char *temp = s;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			count *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			nb = nb * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (nb * count);
}
