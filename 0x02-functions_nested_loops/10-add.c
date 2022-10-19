#include "main.h"
/**
 * add - adds two numbers
 * @num1: numbers to add
 * @num2: number to add
 * Return: sum of two numbers
 */
int add(num1, num2)
{
	int sum;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			sum = add(num1, num2);
			_putchar(sum);
		}
	}
	_putchar('\n');
	return (sum);
}



