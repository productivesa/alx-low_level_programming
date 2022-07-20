#include "main.h"
/**
 * is_primenumber - checks the number is prime or not
 * @n: number will checked
 * @itr: iterator
 * Return: true if n is prime false if not
 */
int is_primenumber(int n, int itr)
{
	if (n % itr == 0)
	{
		if (n == itr)
			return (1);
		else
			return (0);
	}
	return (0 + is_primenumber(n, itr + 1));
}
/**
 * is_prime_number - checks if given number is prime
 * @n: number to input
 * Return: 1 if n is prime number. 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_primenumber(n, 2));
}
