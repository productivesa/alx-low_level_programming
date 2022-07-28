#include "main.h"
#include <stdlib.h>
/**
 * array_range - array created from miin to max
 * @min: number of lements
 * @max: maximum
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
		return (NULL);
	p = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
