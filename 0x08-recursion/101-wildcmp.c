#include "main.h"
int findsrc(char *s, char c, int i, int p);

/**
 * wildcmp - function taht compares two strings
 * @s2: input that can contain the character *
 * @s1: input
 * Return: 1 if the string might be considered identical, 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return (wildcmp(s1, ++s2));
		else if (*s1 == '*' && *s2 == '\0')
			return (wildcmp(++s1, s2));
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s1 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, ++s2));
		else
			return (wildcmp(s1 + findsrc(s1, *(s2 + 1), 0, 0), s2));
	}
	return (0);
}

/**
 * findsrc - function that adds the * character
 * @s: string
 * @c: integer
 * @i: integer
 * @p: integer
 * Return: 0;
 */
int findsrc(char *s, char c, int i, int p)
{
	if (*(s + i) == '\0')
		return (p + 1);
	else if (*(s + i) == c || *(s + i) == '*')
		p = i;

	return (findsrc(s, c, i + 1, p));
}
