#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 * @argc: - parameter one
 * @argv: - parameter name de program
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
