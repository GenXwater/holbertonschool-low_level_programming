#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * handle_error - handle error and exit with a specific code
 * @error_code: error code to exit with
 * @msg: error message to print
 */
void handle_error(int error_code, const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(error_code);
}

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
		handle_error(97, "Usage: cp file_from file_to");
	}

	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
	{
		handle_error(98, "Error: Can't read from file");
	}

	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		close(fd_source);
		handle_error(99, "Error: Can't write to file");
	}

	while ((n_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_dest, buffer, n_read);
		if (n_written != n_read)
		{
			close(fd_source);
			close(fd_dest);
			handle_error(99, "Error: Can't write to file");
		}
	}

	if (n_read == -1)
	{
		close(fd_source);
		close(fd_dest);
		handle_error(98, "Error: Can't read from file");
	}

	if (close(fd_source) == -1)
	{
		handle_error(100, "Error: Can't close fd");
	}

	if (close(fd_dest) == -1)
	{
		handle_error(100, "Error: Can't close fd");
	}

	return (0);
}

