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
	int a, b, prod;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	prod = a * b;
	printf("%d\n", prod);

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
return (0);
}
