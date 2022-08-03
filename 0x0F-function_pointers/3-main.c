#include "3-calc.h"
/**
 * main - a function
 * @argc: --
 * @argv: --
 * Return: --
 */
int main(int argc, char *argv[])
{
	int x, y;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", operation(x, y));
	return (0);
}}
