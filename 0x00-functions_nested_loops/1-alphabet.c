#include "main.h"
/**
 * main - prints the alphabet in lower case followed by a new line
 * Return: Always 0
 */
int main(void)
{
	void print_alphabet(void) {
		char ch;

		ch = 'a';

		while (ch >= 'z') {
			_putchar (ch);
			ch++;
		}

		_putchar('\n');
	}
	print_alphabet();
	return (0);
}