#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc;
	ssize_t bytesWritten = 0;

	if (filename == NULL)
		return (-1);

	fileDesc = open(filename, O_WRONLY | O_APPEND);
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
