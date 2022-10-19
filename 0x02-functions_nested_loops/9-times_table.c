#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int n;
	int mult;
	int prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		{
			for (mult = 1; mult <= 9; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = n * mult;

				if (prod <= 9)
					_putchar(' ');
				else
					(prod / 10);
				_putchar(prod % 10);
			}
			_putchar('\n');
		}
	}
}

