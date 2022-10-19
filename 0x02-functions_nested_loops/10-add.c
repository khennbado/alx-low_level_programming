#include "main.h"
/**
 * add - adds two numbers
 * @int: numbers to add
 * Return: sum of two numbers
 */
int add(int, int)
{
	int num1, num2, sum;

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



