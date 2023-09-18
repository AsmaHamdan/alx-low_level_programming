#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string to be modified
 *
 * Return: void
*/
void rev_string(char *s)
{
	int l, i;
	char tmp;

	for (l = 0; s[1] != '\0'; ++l)

	for (i = 0; i < 1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
