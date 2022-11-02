#include "main.h"
int lengthc(char *s);
int palindrome(char str[], int st, int end);
/**
 * is_palindrome - function that checks for a palindrome
 * @s: input
 * Return: 1 if a string is a palindrome, 0 if otherwise
 */
int is_palindrome(int *s)
{
	int len;

	len = lengthc(s);

	if (len == 0)
		return (1);
	return (palindrome(s, 0, len - 1));
}
/**
 * lengthc - find the length count
 * @s: input
 * Return: length size
 */
int lengthc(char *s)
{
	if (*s != '\0')
		return (1 + lengthc(s + 1));
	return (0);
}
/**
 * palindrome - checks if the start and end of the string matches
 * @str: string
 * @st: stand of the sting
 * @end: end of the string
 * Return: if str is a palindrome
 */
int palindrome(char str[], int st, int end)
{
	if (st >= end)
		return (1);
	if (str[st] != str[end])
		return (0);
	if (st <= end || st < end + 1)
		return (palindrome(str, st + 1, end - 1));
	return (1);
}
