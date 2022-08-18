#include "main.h"
/**
 * get_bit - Entry
 * @n: unsigned long int input
 * @index: index of bit
 * Return: value of bit
 */
int get_bit(unisgned long int n, unsigned inr index)
{
	unisgned int count;

	if (index > 63)
		return (-1);
	m = 1 << index;
	return ((n & m) > 0);
}

