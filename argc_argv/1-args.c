#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 * @argc: - parameter one
 * @argv: - parameter name de program
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
