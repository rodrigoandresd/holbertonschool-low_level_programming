#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: - parameter number
 * @argv: - parameter name de program
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
	}
	if (!(argc))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	for (i = 0 ; i < argc ; i++)
	sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
	}
}
