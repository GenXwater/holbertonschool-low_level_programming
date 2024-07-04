#include <stdio.h>
#include <stdlib.h>

/**
 * création d'un fichier c avec la variable argv et argc
 *
 */

int main(int argc, char **argv)
{
	if(argc != 3)
	{
		fprintf(stderr, "Format : programme <IP> <port>\n");
		exit(EXIT_FAILURE);
	}

	printf("Connexion au serveur %s en cours... (port %s)\n",
			argv[1], argv[2]);
	return (0);
}
