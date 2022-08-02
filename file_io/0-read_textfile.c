#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to SO
 * @letters: is the number of letters it should read and print
 * @filename: name of the file to be read
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *buffer;
	ssize_t letter_read;
	ssize_t letter_write;
	ssize_t number_letter_rw;

	if (filename == NULL)
	return (0);

	file_d = open(filename,  O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}

	letter_read = read(file_d, buffer, letters);
	letter_write = write(STDOUT_FILENO, buffer, letter_read);

	if (letter_write == -1 || letter_write != letter_read)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	number_letter_rw = letter_write;
	close(file_d);
	free(buffer);
	return (number_letter_rw);
}


