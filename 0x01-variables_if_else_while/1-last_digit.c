#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);

	if (n > 5)
{
		printf("%d and is greater than 5", n);
}
	if (n == 0)
{
		printf("%d and is equal to 0", n);
}
	if (n < 6 && n != 0)
{
		printf("%d and is less than 6 not equal to 0", n);
}
printf("\n");

return (0);
}
