#include "main.h"
#include <stdio.h>
/**
 * flip_bits - return the number off bit
 * @n: number input
 * @m: number input 2
 * Return: number of flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int flip = 0, i, j;

	while (!(n == 0 && m == 0))
	{
		i = n & 1;
		j = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (i != j)
			flip += 1;
	}
	return (flip);
}
