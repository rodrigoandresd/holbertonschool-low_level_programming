#include <stdio.h>
#include "main.h"
int divisible(int num, int div);

/**
 * is_prime_number - function that returns 1 if the input is a prime number
 * @n: number imput
 * Return: 1 if num is divisible or 0 if numis not divisible
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (divisible(n, 2));
}

/**
 * divisible - check if num is divisible
 * @num: the number imput
 * @div: result of division
 * Return: num is divisible
 */
int divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (divisible(num, div + 1));
}

