#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - convert binary number to unsignedint
 * @b: binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		ui = ui << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			ui = ui | 1;
		b++;
	}
	return (ui);

}
