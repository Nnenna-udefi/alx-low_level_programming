#include "main.h"
/**
 * main - function that prints the sign of a number
 * Return: 1 and print + if n is greater than zero
 * Return: 0 and prints 0 if n is zero
 * Return: -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	
	if (n > 0)
	{
		return (1);
		_putchar ("+");
	}
	else if (n < 0)
	{
		return (-1);
		_putchar ("-");
	}
	else if (n == 0)
	{
		return (0);
		_putchar (0);
	}
}
