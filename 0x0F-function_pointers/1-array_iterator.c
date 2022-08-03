#include "function_ppointers.h"
/**
 * array_iterator - execute a function
 * @array: input
 * @size: size of an array
 * @action: pointer of the function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
		for (x = 0; x < size; x++)
			action(array[x]);
}
