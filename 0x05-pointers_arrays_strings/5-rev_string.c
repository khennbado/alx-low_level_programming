#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string
 */
void rev_string(char *s)
{
	char rv = s[0];
	int j = 0;
	int i;

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		j--;
		rv = s[i];
		s[i] = s[j];
		s[j] = rv;
	}
}
