#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string printed
 * @n: number of integer passed too the functions
 * Return: no return
 */
voidprint_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arglist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
