#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that  function that returns a pointer memory space
 * @str: array
 * Return: str
 */

char *_strdup(char *str)
{
	char *strcp;
	unsigned int i;
	unsigned int size;

	for (size = 0 ; size != 0 ; size++)
	{
	}
	strcp = malloc(sizeof(char) * size + 1);

	if (size <= 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		strcp[i] = str[i];
	return (strcp);
	free(str);
	free(strcp);
}
