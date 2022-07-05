#include "main.c"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: 0 (reurn)
 */
void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
putchar('\n');
}
