#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements of the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n; n++)
	{
		n--;
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}

