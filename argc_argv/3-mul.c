#include <stdio.h>

/**
 * main - Multiplies two numbers provided as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 on success, 1 if there are not exactly two additional arguments.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error: You need to provide exactly two arguments.\n");
		return 1;
	}

	int num1 = 0;
	int num2 = 0;

	for (int i = 0; argv[1][i] != '\0'; i++)
	{
		num1 = num1 * 10 + (argv[1][i] - '0');
	}

	for (int i = 0; argv[2][i] != '\0'; i++)
	{
		num2 = num2 * 10 + (argv[2][i] - '0');
	}

	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
