#include <stdio.h>
/**
 *main - Entry point
 *prints the size of various types on the computer it is compiled and run on
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long a;
	long long l;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
