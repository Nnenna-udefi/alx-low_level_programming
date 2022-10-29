#include "main.h"
/**
 * print_rev - function that prints a string in reverse followed by a new line
 * @s: integer
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i, n;
	int rev = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		rev++;
	}
	for (n = (rev - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}