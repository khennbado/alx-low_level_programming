#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: integer one
 * @b: integer two
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
