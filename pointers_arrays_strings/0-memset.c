#include <stdio.h>
#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: pointer
 * @n: bytes of the memory area pointed
 * @b: constant byte
 * Return: original
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
	s[i] = b;
	}
	return (s);
}

