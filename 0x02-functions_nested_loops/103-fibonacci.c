#include "main.h"
/**
 * function to prints valued even number
 * Return: Always 0
 */
int main(void)
{
long int n1, n2, fn, fib;
n1 = 1;
n2 = 2;
fn = fib = 0;
while (fn <= 4000000)
{
fn = n1 + n2;
n1 = n2;
n2 = fn;
if ((n1 % 2) == 0)
{
fib = fib + n1;
}
}
printf("%ld\n", fib);
return (0);
}
