#include "main.h"
/**
 * _strlen_recursion - functionn that returns the length of a string
 * @s: input
 * Return: Always 0;
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);

	i = (1 + _strlen_recursion(s + 1));
	
	return (i);
}
