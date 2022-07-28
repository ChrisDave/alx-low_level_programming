#include <stdio.h>
#include <stdlib.h>

/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);
	return (0);
}
