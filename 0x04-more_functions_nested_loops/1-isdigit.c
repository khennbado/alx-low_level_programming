#include "main.h"

/**
 * _isdigit - check digits 0 to 9
 * @c: the character
 * Return: 1 for digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
