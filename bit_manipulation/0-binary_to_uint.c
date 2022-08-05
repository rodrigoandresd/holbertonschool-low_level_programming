#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number, 0 if is error
 */ 

 unsigned int binary_to_uint(const char *b)
 {
	unsigned int n = 0, i;

	if (!b)
		return (0);

	for (i = 0; *(b + i); i++)
	{
		n = n << 1;
		if (*(b + i) == '1')
			n = n | 1;
		else if (*(b + i) != '0')
			return (0);
	}
	return (n);
 }
