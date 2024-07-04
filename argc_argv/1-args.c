#include <stdio.h>

/**
 * main - Prints the name of the program followed by a new line
 * @argc: The number of command-line arguments (not used in this program).
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
