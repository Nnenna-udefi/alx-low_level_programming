#include <stdio.h>
/**
 * main - prints the lower alphabet in reverse,
 * followed by a new line.
 * Return: 0 if no errors, non-zero if errors.
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
