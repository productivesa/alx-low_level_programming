#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a: print character
 * Return: Always 0 to exit
 */
void print_chessboard(char (*a)[0])
{
	int x = 0;
	int z = 0;

	for (; x < 64; x++)
	{
		if (x % 8 == 0 && x != 0)
		{
			z = x;
		}
		_putchar(a[x / 8][x - z]);
	}
	_putchar('\n');
}
