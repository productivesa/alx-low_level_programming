#include "main.h"
#include <studio.h>
/**
 * print_digsums - prints sum of two diagonals of a square matrix of integers.
 * @a: input pointer
 * @size: size
 * Return: Always 0 to exit
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int n1 = 0;
	int n2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			n1 = n1 + *(a + i);
		if (i % (size - 1) == 0 && i < size * size - 1)
			n2 = n2 + *(a + i);
	}
	printf("%d, %d\n", n1, n2);
}