#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @j: string
 * Return: replaced words
 */
char *leet(char *j)
{
	int i, x;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; j[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (j[i] == find[x])
			{
				j[i] = replace[x / 2];
				x = 9;
			}
		}
	}
	return (j);
}
