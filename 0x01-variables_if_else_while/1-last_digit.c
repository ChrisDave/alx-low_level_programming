#include <stdlb.h>
#include <time.h>
#include <stdio.h>




/*
 *	main - This program, will assign a random number to a variable
 *		n each time it is executed.
 *	Return Always (0).
 */

/*	program will assign a random number to a variable */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n)

	if (n > 5)
{
		printf("greater than 5");
}
	if (n == 0)
{
		printf("0");
}
	if (n < 6 && n != 0)
{
		printf("less than 6 not equal to 0");
}
printf("\n");

return (0);
}
