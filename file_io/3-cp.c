#include "main.h"

/**
 * copy_text_file - function that copy text from file to other file
 * @file_from: the name of the file to create
 * @file_to: file new copy
 * Return: 0 on success
 */
int copy_text_file(const char *file_from, char *file_to)
{
	int f_d_from, f_d_to, readed, writed;
	char *buffer;

	if (file_from == NULL)
	return (98);

	f_d_from = open(file_from, O_RDONLY);
	if (f_d_from == -1)
		return (98);

	f_d_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_d_to == -1)
		return (99);

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		close(f_d_from);
		return (98);
	}
	readed = 1;
	while (readed)
	{
		readed = read(f_d_from, buffer, 1024);
		if (readed == -1)
		{
			close(f_d_from);
			close(f_d_to);
			free(buffer);
			return (98);
		}
		writed = write(f_d_to, buffer, readed);
		if (writed == -1)
		{
			close(f_d_from && f_d_to);
			free(buffer);
			return (99);
		}
	}
	close(f_d_from);
	close(f_d_to);
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
	int copied;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
	copied = copy_text_file(av[1], av[2]);
	if (copied == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (copied == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (copied != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copied);
		exit(100);
	}
	return (0);
}
