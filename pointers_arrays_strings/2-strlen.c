#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: variable puntero
 * return: the length of a string.
 */

int _strlen(char *s)
{
	int leng = 0;

while (leng != '\0')
	{
	leng++;
	s++;
	}
return (leng);
}

