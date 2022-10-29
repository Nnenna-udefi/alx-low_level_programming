#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @k: string
 * Return: encoded string
 */
char *rot13(char *k)
{
	int i;
	char firstset[] = {"ABCDEFGHIJKLMabcdefghijklm"};
	char secondset[] = {"NOPQRSTUVWXYZnopqrstuvwxyz"};

	for (i = 0; k[i] != '\0'; i++)
	{
		if (k[i] == firstset[i] || k[i] == secondset[i])
		{
			firstset[i] += 13;
			secondset[i] -= 13;
		}
	}
	return (k);
}
