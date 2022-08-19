#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: index
 * @n: number
 * Return: 1 or 0 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int sum;

	if (index > 63)
		return (-1);
	sum = 1 << index;
	*n = *n | sum;
	return (1);
}
