#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers provided as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 on success, 1 if there are not exactly two additional arguments.
 */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int result = 0;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
