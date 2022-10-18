#include "main.h"

/**
 * _isalpha - prints if its lowercase or upper
 * @c: the character
 * Return: 1 if lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c == 'a' || c == 'A')
		return (1);
	else
		return (0);
}
