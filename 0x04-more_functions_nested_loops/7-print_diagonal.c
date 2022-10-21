#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: the character
 * Return: 0
 */
void print_diagonal(int n)
{
	int z, y;

	if (n <= 0)
		_putchar('\n');
	for (z = 0; z < n; z++)
	{
		for (y = 0; y < z; y++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
