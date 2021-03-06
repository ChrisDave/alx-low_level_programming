#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints minimum coins from given number
 * @argc: argc parameter
 * @argv: array of command listed
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int num, j, res = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
			return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			num = num - coins[j];
			res++;
		}
	}
	printf("%d\n", res);
	return (0);
}


