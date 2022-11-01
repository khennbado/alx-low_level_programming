#include "main.h"

/**
 * _memset - writes funtions that fills memory
 * @s: starting address
 * @n: number of bytes
 * @b: the value
 * Return: return new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
