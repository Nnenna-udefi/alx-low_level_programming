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
	int i;
	int aa[] = {'a', 'A'};
	int ee[] = {'e', 'A'};
	int oo[] = {'o', 'O'};
	int tt[] = {'t', 'T'};
	int ll[] = {'l', 'L'};

	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[i] = (aa[] || ee[] || oo[] || tt[] || ll[]))
		{
			aa[] = 4;
			ee[] = 3;
			oo[] = 0;
			tt[] = 7;
			ll[] = 1;
		}
	}
	return (j);
}
