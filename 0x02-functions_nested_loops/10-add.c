#include "main.h"
/**
 * add - adds two numbers
 * @int: numbers to add
 * Return: sum of two numbers
 */
int add(int, int)
{
	int sum;
	int num1;
	int num2;

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



