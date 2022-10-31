#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: pointer
 * @accept: pointer
 * The _strpbrk() function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, b;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
				return (s + i);
		}
	}
	return (NULL);
}
