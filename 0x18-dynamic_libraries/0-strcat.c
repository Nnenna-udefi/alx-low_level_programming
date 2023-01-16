#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: string to be appended
 * @src: string appended to dest
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
for (n = 0; src[n] != '\0'; n++)
{
dest[i] = src[n];
i++;
}
dest[i] = '\0';
return (dest);
}
