#include "main.h"
/**
 * reverse_array - reverse content of array of integers
 * @a: array of integers
 * @n: numbers of elements to swap
 * Return : no return
 */
void reverse_array(int *a, int n)
{
	int le;
	int k;
	int temp;

	for (le = 0; i < n - 1; i++)
	{
		for (k = le + 1; k > 0; k--)
		{
			temp = *(a + k);
			*(le + k) = *(len + (k - 1));
			*(le + (k - 1)) = temp;
		}
	}
}
