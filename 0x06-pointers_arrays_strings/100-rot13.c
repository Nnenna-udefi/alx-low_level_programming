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
		if ((k[i] >= 97 && k[i] <= 122) || (k[i] >= 65 && k[i] <= 90))
			k[i] += 13;
	}
	return (k);
}
