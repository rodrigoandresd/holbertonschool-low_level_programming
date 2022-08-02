#include "main.h"


/**
 * create_file - function that creates a file
 * @filename: is the name of the file to create
 * @text_content: text content for the file to create
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int file_p, file_create, count = 0;

	if (filename == NULL)
		return (-1);

	file_p = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_p == -1)
		return (-1);

	while (text_content[count])
		count++;

	file_create = write(file_p, text_content, count);
	close(file_p);
	if (file_create == -1)
		return (-1);
	return (1);


}
