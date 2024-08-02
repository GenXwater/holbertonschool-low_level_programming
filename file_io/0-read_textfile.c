#include <fcntl.h>  /** pour open */
#include <unistd.h> /** pour read, write et close */
#include <stdlib.h> /** pour malloc et free */

/**
 * read_textfile - Lit un fichier texte et l'affiche sur la sortie standard.
 * @filename: Le nom du fichier à lire.
 * @letters: Le nombre de lettres à lire et à afficher.
 *
 * Return: Le nombre réel de lettres lues et affichées, ou 0 en cas d'erreur.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	/** Vérifier si filename est NULL */
	if (filename == NULL)
	{
		return (0);
	}

	/** Ouvrir le fichier en lecture seule */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{ /** Échec de l'ouverture du fichier */
		return (0);
	}

	/** Allouer de la mémoire pour le buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/** Lire le fichier */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{ /** Échec de la lecture du fichier */
		free(buffer);
		close(fd);
		return (0);
	}

	/** Écrire sur la sortie standard */
	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
	{ /** Échec de l'écriture ou nombre d'octets incorrect */
		free(buffer);
		close(fd);
		return (0);
	}

	/** Libérer la mémoire et fermer le fichier */
	free(buffer);
	close(fd);

	/** Retourner le nombre de lettres lues et écrites */
	return (n_written);
}

