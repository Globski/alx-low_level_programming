#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 * If filename is NULL, return -1.
 * If text_content is NULL or writing fails, return -1.
 *
 * The created file has permissions rw-------.
 * If the file already exists, it's truncated.
 */
int create_file(const char *filename, char *text_content)
{
	int fileDesc;
	ssize_t bytesWritten = 0;

	if (filename == NULL)
		return (-1);

	fileDesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDesc == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[bytesWritten])
			bytesWritten++;
	}

	if (bytesWritten > 0 && write(fileDesc, text_content, bytesWritten) == -1)
	{
		close(fileDesc);
		return (-1);
	}

	close(fileDesc);
	return (1);
}
