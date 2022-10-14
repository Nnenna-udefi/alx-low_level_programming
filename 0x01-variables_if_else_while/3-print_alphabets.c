#include <stdio.h>
/**
 * main - prints the alphabets in lower case
 * and then in uppercase, followed by a new line.
 * Return: 0 if no errors, return non-zero if errors.
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar (ch);
	putchar ('\n');
	return (0);
}
