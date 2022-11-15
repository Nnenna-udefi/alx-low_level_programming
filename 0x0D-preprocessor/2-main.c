#include <stdio.h>
int _putchar(char c);

/** main - program that prints the name of the file
 * from which it was compiled from
 * Return: 0
 */
int main(void)
{
	_putchar("%s\n", __FILE__);
	return (0);
}
