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
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
