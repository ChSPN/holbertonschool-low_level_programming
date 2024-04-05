#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: String to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_result;
	ssize_t text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

    /* Open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

    /* Calculate the length of text_content */
	while (text_content[text_len])
		text_len++;

    /* Write text_content to the end of the file */
	write_result = write(fd, text_content, text_len);
	if (write_result == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}