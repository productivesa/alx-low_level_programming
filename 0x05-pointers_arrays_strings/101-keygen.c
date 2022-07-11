#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords.
 * Return: 0
 */
int main(void)
{
	int password;
	int sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		password = (rand() % 128);
		sum = sum + pass;
		printf("%c", password);
	}
	printf("%c", 2772 - sum);
	return (0);
}

