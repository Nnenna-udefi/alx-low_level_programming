nclude "main.h"
/**
 * print_triangle - function that prints triangle followed by a new line
 * @size: size of the triangle
 * Return: \n if size is 0 or less
 */
void print_triangle(int size)
{
	int c, i, j;

	c = 0;
	i = size - 1;
	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		c++;
	}
	if (size <= 0)
		_putchar('\n');
}
