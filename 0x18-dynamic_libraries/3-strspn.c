#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: number of bytes in the intial segment of s
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, numbytes, c;

	numbytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				numbytes++;
				c = 1;
			}
		}

		if (c == 0)
			return (numbytes);
	}
	return (numbytes);
}
