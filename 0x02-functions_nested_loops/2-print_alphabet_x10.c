#include "main.h"
/**
 * print_alphabet_10x - Printing the lower case 10 times.
 *
 * Return: 0 (reurn)
 */
void print_alphabet_10x(void)
{
int i;
char alpha;

for (i = 0; i < 10; i++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);
_putchar('\n');
