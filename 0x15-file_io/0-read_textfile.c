#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print. If there's an
 * error or failure, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDesc;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);

	fileDesc = open(filename, O_RDONLY);
	if (fileDesc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fileDesc);
		return (0);
	}

	bytesRead = read(fileDesc, buffer, letters);
	if (bytesRead == -1)
	{
		close(fileDesc);
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		close(fileDesc);
		free(buffer);
		return (0);
	}

	close(fileDesc);
	free(buffer);

	return (bytesWritten);
}
