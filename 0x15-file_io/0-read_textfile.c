#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: letters is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (0);
	buffer[letters] = '\0';

	wr = write(STDOUT_FILENO, buffer, letters);
	if (wr == -1 || rd != wr)
		return (0);
	free(buffer);
	close(fd);
	return (wr);
}
