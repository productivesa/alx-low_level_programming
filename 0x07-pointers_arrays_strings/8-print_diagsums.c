#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int index, n1 = 0, n2 = 0;

	for (index = 0; index < size; index++)
	{
		n1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		n2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", n1, n2);
}

