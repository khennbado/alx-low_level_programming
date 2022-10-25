#include "main.h"

/**
 * _strlen - writes the length of a string
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
