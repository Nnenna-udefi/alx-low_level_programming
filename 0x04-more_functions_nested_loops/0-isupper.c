#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: int to be checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
