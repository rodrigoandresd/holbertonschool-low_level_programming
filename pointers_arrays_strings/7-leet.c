#include <stdio.h>
#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @original: pointer
 * Return: original
 */

char *leet(char *original)
{
	int i, j;

	char *abc = "aAeEoOtTlL";
	char *code = "4433007711";

	for (i = 0 ; original[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (original[i] == abc[j])
			{
			original[i] = code[j];
			}
		}
	}
	return (original);
}

