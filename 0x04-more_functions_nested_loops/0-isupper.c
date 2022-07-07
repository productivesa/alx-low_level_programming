#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character
 * @c: input character
 * Return: 1 if is an uppercase character ,else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
