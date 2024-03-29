#include "main.h"
int squareroot(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input
 * Return: -1, if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - function that solves _sqrt_recursion
 * @n: input
 * @i: input
 * Return: if squareroot
 */
int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}
