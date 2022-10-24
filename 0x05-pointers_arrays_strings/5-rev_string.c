#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: input
 */
void rev_string(char *s)
{
	int i;
	int n = 0;
	char rev = s[0];

	while (s[n] != '\0')
		n++;
	for (i = 0; i < n; i++)
	{
		n--;
		rev = s[i];
		s[i] = s[n];
		s[n] = rev;
	}
}
