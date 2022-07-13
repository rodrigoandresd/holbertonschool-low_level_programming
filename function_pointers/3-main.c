#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - runs calc
 * @argc: counter
 * @argv: values
 * Return: 0 sucess
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int calc;
	char sim;
	int (*operation)(int, int);

	if (argc != 4) /* valid number of arguments */
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	calc = operation(num1, num2);
	sim = *argv[2];

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	
	if ((sim == '/' || sim == '%') && num2 == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", calc);
	return (0);
}
