#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a: print character
 * Return: Always 0 to exit
 */
void print_chesboard(char(*a)[8])
{
	int i = 0;
	int j = 0;

	for (; i < 8; i++)
	{
		for ( ; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	_putchar('\n');
	}
}
