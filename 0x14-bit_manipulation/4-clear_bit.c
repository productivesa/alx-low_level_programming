#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * clear_bit - clear value of bit 1
 * @index: index
 * @n: number
 * Return: 1 or 0 failed
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
