#include "main.h"

/**
 * print_sign - prints +, 0 and -
 * @n: integer
 * Return: 1 if the number is greater than zero
 * 0 if the number is zero
 * -1 if the number less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
}
