#include "main.h"
/**
 * _strdup - function that returns a pointer to a
 * a newly allocsted memory in space
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	a = malloc(i * sizeof(*a) + 1);

	if (a == NULL)
		return (NULL);
	for (c = 0; c < 1; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
