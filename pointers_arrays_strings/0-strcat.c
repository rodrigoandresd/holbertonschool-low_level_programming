#include <stdio.h>
#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest:  buffer pointed
 * @src: string pointed to by src
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	dest++;

	while (*src)
	*dest++ = *src++;

	return (temp);
}

