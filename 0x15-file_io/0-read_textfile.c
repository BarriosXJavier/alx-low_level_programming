#include "main.h"

/**
  * read_textfile -
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: ...
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readd;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readd = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readd);

	free(buff);
	close(fd);
	return (readd);
}
