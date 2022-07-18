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
	int i
	int n1 = 0;
	int n2 = 0;

	for (i = 0; i < size; i++)
	{
		n1 += a[(size + 1) * i];
		n2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", n1, n2);
}
