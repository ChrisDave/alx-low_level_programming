#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return : always 0
 */

/* main.c */
int main(void)
{	/* main returns 0 */
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
}

	putchar(10); /* this is an ascii code for new line */

	return (0);

}
