#include "3-calc.h"
/**
 * op_add -adds 2 numbers
 * @a: first num
 * @b: second num
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtruct 2 numbers
 * @a: first num
 * @b: second num
 * Return: result of the 2 subtruction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -product of 2 num
 * @a: first num
 * @b: second num
 * Return: products
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide 2 numbers
 * @a: first number
 * @b: second number
 * Return: result of divident
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates module of 2 numbrs
 * @a: first number
 * @b: second number
 * Return: modules
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return  (a % b);
}
