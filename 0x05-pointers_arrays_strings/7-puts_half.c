#include "main.h"
/**
 * puts_half - function that prints half of the string, followed by a new line
 * @str: input
 */
void puts_half(char *str)
{
	int i, j;
	int len = 0;

	for (i = 0; str[i]; i++)
		len++;
	j = len / 2;
	if (len % 2 == 1)
		j = ((len + 1) / 2);
	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
