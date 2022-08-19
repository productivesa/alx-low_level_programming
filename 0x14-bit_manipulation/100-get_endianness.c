#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function checks endianness
 * Return: 1 if little  is endian , 0 if big indian
 */
int get_indianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return ((int)*c);
}
