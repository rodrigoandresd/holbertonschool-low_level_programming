#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: is the name of the file to create
 * @text_content: text content for the file to create
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_p, file_mend, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_p = open(filename, O_WRONLY | O_APPEND);
	if (file_p == -1)
		return (-1);

	while (text_content && text_content[count])
		count++;

	file_mend = write(file_p, text_content, count);
	close(file_p);

	if (file_mend == -1)
		return (-1);
	return (1);
}
