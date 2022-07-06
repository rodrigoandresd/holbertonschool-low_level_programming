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
	char *strdup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	strdup = malloc(sizeof(char) * (len + 1));

	if (strdup == NULL)
		return (NULL);

	while ((strdup[i] = str[i]) != '\0')
		i++;

	return (strdup);
}
