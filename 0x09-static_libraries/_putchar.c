#include <unistd.h>
/**
 * _putchar - writes the character to c
 * @c: character to print
 * Return: ALways 0 Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
