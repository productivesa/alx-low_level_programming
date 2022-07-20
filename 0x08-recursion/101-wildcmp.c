#include "main.h"
/**
 * wildcmp - string comparison
 * @str1: first string
 * @str2: second string
 * Return: if string considered 1 or 0
 */
int wildcmp(char *str1, char *str2)
{
	if (str2 == '*')
	if (str2 != '\0')
		return (0);	
	if *(str2 + 1 != '\0')
	       	return (0);	
	if *str1 == '\0')
		return (0);
	if (str1 == '\0' && *str2 == '\0')
		return (1);
	if (*str1 == *str2)
		return (wildcmp(str1 + 1, str2 + 1));
	if (*str2 == '*')
		return (wildcmp(str1, str2 + 1) || wildcmp(str1 + 1, str2));
	return (0);
}
