#include "main.h"

/**
 * print_error - prints an error message and exits with a given exit code
 * @code: the exit code
 * @message: the error message
 * @file: the filename to include in the message
 */
void print_error(int code, const char *message, const char *file)
{
	if (file)
		dprintf(STDERR_FILENO, "%s %s\n", message, file);
	else
		dprintf(STDERR_FILENO, "%s\n", message);

	exit(code);
}


/**
 * close_files - closes two file descriptors and handles errors
 * @fileDesc_from: the file descriptor to close for file_from
 * @fileDesc_to: the file descriptor to close for file_to
 */
void close_files(int fileDesc_from, int fileDesc_to)
{
	int closeFrom = close(fileDesc_from);
	int closeTo = close(fileDesc_to);

	if (closeFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileDesc_from);
		exit(100);
	}

	if (closeTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileDesc_to);
		exit(100);
	}
}


/**
 * main - copies the content of a file to another file
 * @argc: the number of command line arguments
 * @argv: an array of command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fileDesc_from, fileDesc_to;
	ssize_t bytesRead, bytesWritten;
	char buffer[BUFSIZE];

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to");

	fileDesc_from = open(argv[1], O_RDONLY);
	if (fileDesc_from == -1)
		print_error(98, "Error: Can't read from file", argv[1]);

	fileDesc_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileDesc_to == -1)
	{
		close(fileDesc_from);
		print_error(99, "Error: Can't write to file", argv[2]);
	}
	while ((bytesRead = read(fileDesc_from, buffer, BUFSIZE)) > 0)
	{
		bytesWritten = write(fileDesc_to, buffer, bytesRead);
		if (bytesWritten == -1 || bytesWritten != bytesRead)
		{
			close(fileDesc_from);
			close(fileDesc_to);
			print_error(99, "Error: Can't write to file", argv[2]);
		}
	}

	if (bytesRead == -1)
	{
		close(fileDesc_from);
		close(fileDesc_to);
		print_error(98, "Error: Can't read from file", argv[1]);
	}
	close_files(fileDesc_from, fileDesc_to);

	return (0);
}
