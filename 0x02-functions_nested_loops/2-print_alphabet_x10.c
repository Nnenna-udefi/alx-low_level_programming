#include "main.h"
/**
 * main -fouction that prints 10 times the alphabet
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	void print_alphabet_x10(void) {

		char ch;

		int n;

		n = 0; 

		while (n < 10) {

		ch = 'a';

		while (ch <= 'z') {

			_putchar (ch);
			ch++;
		}
		_putchar('\n');
		n++;
		}
	}

	void print_alphabet_x10();
	return (0);
}
