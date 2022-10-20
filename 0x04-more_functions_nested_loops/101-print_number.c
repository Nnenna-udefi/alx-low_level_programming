#include "main.h"

/**
 * print_number - function that print an integer
 * @n: the integer
 * Return: Always 0;
 */
void print_number(int n)
{
	if ((n <= 1024) || (n <= 0))
		_putchar("%d", n);
	_putchar("\n")
}
