#include <stdio.h>
#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: pointer dest
 * @c: character
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;
	char *n;
	n = NULL;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	if (s[i] == c)
	return (s + i);
	}
return (n);
}
