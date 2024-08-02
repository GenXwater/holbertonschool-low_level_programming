#include <fcntl.h>   /** pour open */
#include <unistd.h>  /** pour write et close */
#include <sys/stat.h> /** pour les permissions */

/**
 * create_file - Crée un fichier et écrit dedans.
 * @filename: Le nom du fichier à créer.
 * @text_content: Le contenu à écrire dans le fichier.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec.
 *
 * Description:
 * O_WRONLY : Ouvrir le fichier en écriture seule.
 * O_CREAT : Créer le fichier s'il n'existe pas.
 * O_TRUNC : Tronquer le fichier à une taille de 0 s'il existe déjà.
 * S_IRUSR : Permission de lecture pour le propriétaire.
 * S_IWUSR : Permission d'écriture pour le propriétaire.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descr;
	ssize_t n_written;
	size_t length = 0;

	/** Vérifier si filename est NULL */
	if (filename == NULL)
		return (-1);

	file_descr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descr == -1) /** Échec ouverture ou création du fichier */
		return (-1);

	/** Si text_content n'est pas NULL, écrire son contenu dans le fichier */
	if (text_content != NULL)
	{
		while (text_content[length] != '\0') /** Calculer la long. de text_content */
			length++;

		n_written = write(file_descr, text_content, length);
		if (n_written == -1) /** Échec de l'écriture */
		{
			close(file_descr);
			return (-1);
		}
	}

	/** Fermer le fichier */
	close(file_descr);
	return (1);
}
