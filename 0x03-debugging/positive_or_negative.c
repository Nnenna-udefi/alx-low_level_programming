#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - function that prints if integer
 * is positive or negative
 * @i: the int to be called
 */

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

}
