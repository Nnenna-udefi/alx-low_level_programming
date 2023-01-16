#include "main.h"
/**
 * _atoi - function that converts a string to an integer
 * @s: integer
 * number in the string can be preceded by infinite numbers
 * take account of all the - and + signs before the number
 * Return: 0, if there are no numbers in the string
 */
int _atoi(char *s)
{
	int i, j, k;

	j = 0;
	k = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			k *= -1;
		if (s[i] > 47 && s[i] < 58)
		{
			if (j < 0)
				j = (j * 10) - (s[i] - '0');
			else
				j = (s[i] - '0') * -1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (k < 0)
		j *= -1;

	return (j);
}
