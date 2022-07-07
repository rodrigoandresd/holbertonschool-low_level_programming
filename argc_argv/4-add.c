#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * is_number - checks to see if input is a number
 * @s: input to check for numberhood
 * Return: 1 if it is a number, 0 if not
 */
int is_number(char *s)
{
	unsigned int i;

	for (i = 0 ; i < strlen(s) ; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
		return (0);
		}
	}
	return (1);
}

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
	i = 0;

	if (argc == 1)
	{
	}
	for (i = 1 ; i < argc ; i++)
	{
		if (is_number(argv[i]))
		{	
			sum += atoi(argv[i]);
		}
		else
		{
		printf("Error\n");
		return (1);
		}
	}
	printf("%d\n", sum);
return (0);
}
