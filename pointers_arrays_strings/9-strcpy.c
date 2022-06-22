#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest:  buffer pointed
 * @src: string pointed to by src
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
return (dest);
}

