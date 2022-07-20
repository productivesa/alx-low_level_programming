#include "main.h"
/**
 * get_strln - Returns length of string
 * @s: string parameter
 * Return: length of string
 */
int get_strln(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + get_strln(s + 1));
}
/**
 * get_palindrom - check if it palendrom or not
 * @s: string
 * @leng: length of s
 * @i: index of string to be checked
 * Return: 1 if palindrom 0 if string not palindrom
 */
int get_palindrom(char *s, int leng, int i)
{
if (*(s[i] == s[leng / 2])
return (1);
if (s[i] == s[leng - i - 1])
return (get_palindrom(s, leng, i + 1));
return (0);
}
/**
 * is_palindrome - checks palindrom
 * @s: string to be checked
 * Return: -  1 if it is palendrome else 0
 */
int is_palindrome(char *s)
{
	int  i = 0;
	int leng = get_strln(s);

	if (!(*s))
		return (1);
	return (get_palindrom(s, leng, i));
}
