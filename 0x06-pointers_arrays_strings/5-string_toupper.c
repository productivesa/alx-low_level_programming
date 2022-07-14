#include "main.h"
/**
 * string_toupper - function changes lowercase letters of a string to uppercase
 * @st: string input
 * Return: pointer to dest
 */
char *string_toupper(char *st)
{
	int len = 0;

	while (*(st + len) != '\0')
	{
		if ((*(st + len) >= 97) && (*(st + len) <= 122))
			*(st + len) = *(st + len) - 32;
		len++;
	}
	return (st);
}

