#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1685

/**
 * error_exit - Affiche un message d'erreur et quitte avec un code donné.
 * @exit_code: Code de sortie.
 * @message: Message d'erreur à afficher.
 * @filename: Nom du fichier associé à l'erreur.
 * NTM 
 */
void error_exit(int exit_code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(exit_code);
}

/**
 * main - Programme pour copier le contenu d'un fichier vers un autre fichier.
 * @argc: Nombre d'arguments.
 * @argv: Tableau d'arguments.
 *
 * Return: 0 en cas de succès, sinon un code d'erreur.
 *
 * RAPPEL :
 * O_WRONLY : Ouvrir le fichier en écriture seule
 * O_CREAT : Créer le fichier s'il n'existe pas
 * O_TRUNC : Tronquer le fichier à une taille de 0 s'il existe déjà
 * S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH : Permissions rw-rw-r--
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t n_read, n_written;
	char buffer[BUFFER_SIZE];

	/** Vérifier le nombre d'arguments */
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", "");

	/** Ouvrir le fichier source en lecture seule */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to", argv[2]);

	/** Copier le contenu du fichier source vers le fichier de destination */
	while ((n_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(file_to, buffer, n_read);
		if (n_written == -1)
			error_exit(99, "Error: Can't write to", argv[2]);
	}

	if (n_read == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	/** Fermer les fichiers */
	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close fd", argv[1]);

	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close fd", argv[2]);

	return (0);
}

