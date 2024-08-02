#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main - program that copies the content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, otherwise exit with appropriate code
 */
int main(int argc, char *argv[])
{
	int fd_source, fd_dest;
	char buffer[BUFFER_SIZE];
	ssize_t n_read, n_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_source);
		exit(99);
	}

	while ((n_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_dest, buffer, n_read);
		if (n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_source);
			close(fd_dest);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_source);
		close(fd_dest);
		exit(98);
	}

	if (close(fd_source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}

	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}

	return (0);
}

