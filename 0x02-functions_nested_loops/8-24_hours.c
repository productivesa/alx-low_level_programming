#include "main.h"
/**
 * jack_bauer - function that prints every minuite of the day
 * Return: Always 0
 */
int jack_bauer(void)
{
int h;
int m;
for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
_putchar('\n');
}
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
