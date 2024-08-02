#include <fcntl.h>   /** pour open */
#include <unistd.h>  /** pour write et close */

/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier.
 * @filename: Le nom du fichier.
 * @text_content: Le contenu à ajouter à la fin du fichier.
 *
 * Return: 1 en cas de succès et -1 en cas d'échec.
 *
 * Description:
 * O_WRONLY : Ouvrir le fichier en écriture seule.
 * O_APPEND : Ouvrir le fichier en mode ajout pr du texte
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t n_written;
	size_t length = 0;

	/** Vérifier si filename est NULL */
	if (filename == NULL)
		return (-1);

	/**
	 * Ouvrir le fichier en mode ajout avec les permissions suivantes:
	 * O_WRONLY : Ouvrir le fichier en écriture seule
	 * O_APPEND : Ajouter le texte à la fin du fichier
	 */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1) /** Échec de l'ouverture du fichier */
		return (-1);

	/** Si text_content n'est pas NULL, écrire son contenu dans le fichier */
	if (text_content != NULL)
	{
		while (text_content[length] != '\0') /** Calcul long. de text_content */
			length++;

		n_written = write(file_descriptor, text_content, length);
		if (n_written == -1) /** Échec de l'écriture */
		{
			close(file_descriptor);
			return (-1);
		}
	}

	/** Fermer le fichier */
	close(file_descriptor);
	return (1);
}

