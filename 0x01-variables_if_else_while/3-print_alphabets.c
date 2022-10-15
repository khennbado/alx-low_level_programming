#include <stdio.h>
/**
 * main - Entry point
 * Description: prints alphabets
 * Return: 0
 */
int main(void)
{
	char s;
	char c;

	s = 'a';
	c = 'A';
	while
		(s <= 'z') {
			putchar(s);
			s++;
		}
	while
		(c <= 'Z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}

