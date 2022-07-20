#include "main.h"
/**
 * _pow_recursion - return value of x raised to power y
 * @x: base.
 * @y: exponent.
 * Return: value of the exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
