#include <stdio.h>

/**
 * main - Print all single digits numbers of base 10
 * starting from 0.
 * @int - int will hold value
 *
 * Return : 0
 **/

/* main.c */
int main(void)
{	/* main returns 0 */
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);

	printf("\n");
	return (0);

}
