#include <stdio.h>
/**
 * main - prints all numbers of base 16
 * in lowercase, followed by a new line
 * Return: 0 if no errors, non-zero if errors
 */
int main(void)
{
	for (n = 48; n < 58; n++)
	{
		putchar (n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}