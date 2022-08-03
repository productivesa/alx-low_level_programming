#include <stdio.h>
#include <stdlib.h>
/**
 * main - func
 * @argc: --
 * @argv: --
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int x, nbytes;

	if (argc != 2)
	{
		printf("WError\n");
		exit(1);
	}
	nbytes = atoi(argv[x]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (x = 0; x < nbytes; x++)
	{
		printf("%02x", opc[x] & 0xFF);
		if (x != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
