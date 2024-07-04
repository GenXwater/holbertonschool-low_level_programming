#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the name of the program followed by a new line
 * @argc: The number of command-line arguments (not used in this program).
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 on succeiss
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}
	return (0);
}
