#include "main.h"

/**
 * print_to_98 - print to 98
 * @n: number to print
 * Return: number
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
