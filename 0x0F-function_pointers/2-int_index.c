#include "function_pointers.h"
/**
 * int_index - function searches for an integer.
 * @array: input array
 * @size: size of an array
 * @cmp: pointer to the function
 * Return: if no element matches return -1
 * if size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (y = 0; y < size; y++)
			if (cmp(array[y]))
				return (y);
	}
	return (-1);
}
