#include main.h

/**
 * swap_int - swaping the value of an integer
 * @a: the first integer.
 * @b: the second integer
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
