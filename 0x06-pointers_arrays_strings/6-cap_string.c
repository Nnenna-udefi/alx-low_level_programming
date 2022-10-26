#include "main.h"
/**
 * cap_string - function that capitalizes all words of the string
 * @c: string
 * Return: capitalized string
 */
char *cap_string(char *c)
{
	int i, j;
	int cap = 32;
	int seperators[] = {',', ';', '.', '?', '"', '(',
		')', '{' '}', ' ',  '\n' '\t'};

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && <= 'z')
			c[i] -= cap;
		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (c[i] == seperators[j])
			{
				j = 12;
				cap = 32;
			}
		}
	}
	return (c);
