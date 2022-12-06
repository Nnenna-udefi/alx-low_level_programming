#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
