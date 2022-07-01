#include <stdio.h>
#include "main.h"
int _sqrt(int x, int square);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number imput
 * Return: value square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - funtion that find square root
 * @root: square of the root
 * @x: number temporal
 * Return: square root
 */

int _sqrt(int x, int root)
{
	if (x > root)
		return (-1);
	if (x * x == root)
		return (x);
	return (_sqrt(x + 1, root));
}

