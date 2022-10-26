#include "main.h"
#include <stdio.h>
/**
 * main - add one line a[2] = 98 in the code
 * Return: 0
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p +5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
