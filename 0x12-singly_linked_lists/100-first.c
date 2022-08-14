#include <stdlib.h>
/**
 * alxfirst - functioon executed before main function
 * Return: no return
 */
void __attribute__ ((constructor)) alxfirst()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
