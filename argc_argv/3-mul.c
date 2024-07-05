#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints multiplcated
 * @argc: the number of commande-line arguments
 * @argv: An array of string representing the command-line arguments.
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;
	int num1 = 0;
        int num2 = 0;
        int result;

	if (argc != 3)
	{
		printf("Ajoute deux nombres pour qu'ils se multiplient\n");
		return (1);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		num1 = num1 * 10 + (argv[1][i] - '0');
	}

	for (i = 0; argv[2][i] != '\0'; i++)
	{
		num2 = num2 * 10 + (argv[2][i] - '0');
	}

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
