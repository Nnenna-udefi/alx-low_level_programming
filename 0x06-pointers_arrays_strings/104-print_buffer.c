#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that prints a buffer
 * prints the content size byte of the buffer pointed at b
 * output should print 10 bytes per line
 * Each line starts with the position of the first byte of the line
 * in hexadecimal (8 chars), starting with 0
 * Each line shows the hexadecimal content (2 chars) of the buffer
 * 2 bytes at a time, separated by a space
 * Each line shows the content of the buffer. If the byte is a
 * printable character, print the letter, if not, print .
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 * @size: size of the buffer
 * @b: buffer to be printed
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			printf("%02x%02x ", b, 9, i);
		}
		else if (i > size / 10)
		{
			printf(b, size % 10 - 1, i);
		}
		else
		{
			printf(b, ".");
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
