#include "main.h"
/**
 * _isalpha - Checks alphabetic character
 *
 * Return: 1 if c is letter ,lower or uppercase else 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
