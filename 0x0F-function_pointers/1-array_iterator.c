#include "function_pointers.h"
/**
 * array_iterator - execute a function
 * @array: input
 * @size: size of an array
 * @action: pointer of the function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array == NULL && action != NULL && size > 0)
	{
		while  (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
