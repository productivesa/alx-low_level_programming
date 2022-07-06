#include "main.h"
/**
 * function to print fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
int z;
long int n1, n2, fn;
n1 = 1;
n2 = 2;
printf("%ld, %ld", n1, n2);
for (z = 0; z < 48; z++)
{
fn = n1 + n2;
printf(", %ld", fn);
n1 = n2;
n2 = fn;
printf("\n");
return (0);
