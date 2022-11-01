#include <unistd.h>

/**
 * _putchar - writes charater c
 * @c: character
 * Return: return 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
