#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 * print alphabets
 * from a to z
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
