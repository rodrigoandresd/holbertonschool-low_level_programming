#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function that copies the string pointed to by src
 * @dest:  buffer pointed
 * @src: string pointed to by src
 * @n: number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

