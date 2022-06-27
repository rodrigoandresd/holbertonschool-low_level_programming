#include <stdio.h>
#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest:  buffer pointed
 * @src: string pointed to by src
 * @n: bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}

