#include "main.h"

/**
 * _strchr - Character string
 * @s: Given string
 * @c: Character given
 *
 * Return: A string
 */
char *_strchr(char *s, char c)
{
	int ind;

	for (ind = 0; s[ind] >= '\0'; ind++)
	{
		if (s[ind] == c)
			return (s + ind);
	}
	return ('\0');
}
