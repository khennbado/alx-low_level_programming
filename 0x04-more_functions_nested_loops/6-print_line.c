#include "main.h"

/**
 * print_line -draws a straight line
 * @n: the character
 * Return: 0
 */
void print_line(int n)
{
	int ln;

	for (n > 0)
	{
		for (ln = 0; ln < n; ln++)
			_putchar('_');
	}
	_putchar('\n');
}
