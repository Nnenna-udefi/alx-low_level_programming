#include "main.h"
int _strlen(char *s);
/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer
 * @n: input
 * @s2: second pointer
 * The returned pointer shall point to a newly allocated
 * space in memory, which contains s1
 * followed by the first n bytes of s2, and null terminated
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int strlen1, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	strlen1 = (unsigned int)_strlen(s1);
	arr = malloc((strlen + n + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (strlen1 + n); i++)
	{
		if (i < strlen1)
			arr[i] = s1[i];
		else
			arr[i] = s2[j++];
	}
	arr[i] = '\0';

	return (arr);
}
/**
 * _strlen - length of the string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
