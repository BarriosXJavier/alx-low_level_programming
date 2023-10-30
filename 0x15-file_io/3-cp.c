#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * @argc: The arg count
  * @argv: The arg vector
  *
  * Return: ...
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - ...
  * @src: ...
  * @dest: ...
  *
  * Return: ...
  */
void copy_file(const char *src, const char *dest)
{
	int ofd, tfd, readd;
	char buff[1024];

	ofd = open(src, O_RDONLY);
	if (!src || ofd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	tfd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readd = read(ofd, buff, 1024)) > 0)
	{
		if (write(tfd, buff, readd) != readd || tfd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (readd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(ofd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ofd);
		exit(100);
	}

	if (close(tfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tfd);
		exit(100);
	}
}
