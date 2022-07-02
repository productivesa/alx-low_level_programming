#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - compairing 5, or 6, or 0
 *
 * Return: Always 0 (Success)
 * 
 */
int main(void)
{
	int n, last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;	
	if (last < 5)
	{
		printf("The Last Degit Of %d is %d and is greater than 5\n", n, last);
	}
	else if(last == 0 )
	{
		priintf("the last degit of %d is %d and is 0\n", n, last);
	}
	else
	{
		printf("the last degit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}	
