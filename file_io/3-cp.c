#include "main.h"

/**
  * case_error_file_from - freefile from in case error
  * @file_from: name of file from
  * @buffer: buffer to free
  * Return: void
  */

void case_error_file_from(const char *file_from, char *buffer)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
  * case_error_file_to - error procedure when file to cant be created
  * @file_to: name of file to
  * @buffer: buffer to free
  * Return: void
  */
void case_error_file_to(char *file_to, char *buffer)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
  * case_error_close - error procedure when issue with closing
  * @fd: integer where file is opened
  * @buffer: buffer to free
  * Return: void
  */
void case_error_close(int fd, char *buffer)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * copy_text_file - function that copy text from file to other file
 * @file_from: the name of the file to create
 * @file_to: file new copy
 * Return: 0 on success
 */
int copy_text_file(const char *file_from, char *file_to)
{
	int f_d_from, f_d_to, readed, writed, err;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		return (0);
	}

	f_d_from = open(file_from, O_RDONLY);
	if (f_d_from == -1)
		case_error_file_from(file_from, buffer);

	f_d_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_d_to == -1)
		case_error_file_to(file_to, buffer);

	readed = 1;
	while (readed)
	{
		readed = read(f_d_from, buffer, 1024);
		if (readed == -1)
			case_error_file_from(file_from, buffer);
		writed = write(f_d_to, buffer, readed);
		if (writed == -1)
			case_error_file_to(file_to, buffer);
	}
	err = close(f_d_from);
	if (err == -1)
		case_error_close(f_d_from, buffer);

	err = close(f_d_to);
	if (err == -1)
		case_error_close(f_d_to, buffer);
	free(buffer);
	return (0);
}

/**
 * main - check the code
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_text_file(av[1], av[2]);
	return (0);
}

