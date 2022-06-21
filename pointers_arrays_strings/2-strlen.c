#include <stdio.h>
#include "main.h"
/**
*_strlen - function that returns the length of a string..
* @s: variable puntero
*
* return: length
*/

int _strlen(char *s)
{
	int lengthh = 0;

	while (*s != '0')
		{
			lengthh++;
			s++;
		}
return (lengthh);
}

