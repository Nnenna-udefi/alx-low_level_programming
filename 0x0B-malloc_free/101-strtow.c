#include "main.h"
/**
 * strtow - function that splits a string into two words
 * @str: pointer string
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int i, j, k;
	char *a;

	printf("\n\n Split string by space into words :\n");
	scanf("Input a string : ");

	j = 0; k = 0;
	a = malloc(sizeof(str) * i);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] = NULL || str[i] = "")
		{
			a[j][k] = '\0';
			k++;
			j = 0;
			return (NULL);
		}
		else
		{
			a[j][k] = str[i];
			j++;
		}
	}
	printf("\n Strings or words after split by space are :\n");
	for(i = 0; i < k; i++)
		printf(" %s\n", a[i]);
	return (NULL);
}
