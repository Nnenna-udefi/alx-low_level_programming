#include "main.h"
/**
 * _strlen - function that returns the length of the string
 * @s: integer
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
