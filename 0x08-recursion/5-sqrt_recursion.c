#include "main.h"
/**
 * * sqrt_checker - finds the srt natural number.
 * @n: numbers to find the sauare
 * @itr: iteartor
 * Return: sqaure root if it is natural square root else -1
 */
int sqrt_checker(int n, int itr)
{
	if ((itr * itr) == n)
		return (itr);
	if (itr == n / 2)
		return (-1);
	return (sqrt_checker(n, itr + 1));
}
/**
 * _sqrt_recursion - returns square root of a number.
 * @n: input numbers.
 * Return: square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_checker(n, 2));
}
