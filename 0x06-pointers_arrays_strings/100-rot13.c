#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @k: string
 * Return: encoded string
 */
char *rot13(char *k)
{
	int i;

	for (i = 0; k[i] != '\0'; i++)
	{
		if (k[i] >= ('a' || 'A') && k[i] <= ('z' || 'Z'))
			k[i] += 13;
	}
	return (k);
}
