#include "main.h"
/**
 * _print_rev_recursion - prints string reversly.
 * @s: string parameter.
 * Return: Always 0 for exit
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
