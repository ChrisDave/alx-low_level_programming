#include <stdio.h>

/**
 * main - prints all single digit numbers,
 * of base 10, starting from zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single_digit = 0;

	for (single_digit = 0; single_digit <= 9; single_digit++)
		putchar(single_digit + '0');
	putchar('\n');
	return (0);
}
