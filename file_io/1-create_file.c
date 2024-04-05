#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Creates a file named filename with permissions rw-------
 *               and writes the content specified by text_content.
 *               If text_content is NULL, creates an empty file.
 *               If the file already exists, its content is truncated.
 *
 * @filename: Name of the file to create.
 * @text_content: String to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */


int create_file(const char *filename, char *text_content)
{
	int fd, write_result;

    /*Vérifier si le nom de fichier est NULL*/
	if (filename == NULL)
		return (-1);

	/*Ouvrir le fichier en écriture seulement*/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

    /*Si le contenu du fichier est fourni, écrire dans le fichier*/
	if (text_content != NULL)
		{
		write_result = write(fd, text_content, strlen(text_content));
		if (write_result == -1)
			{
			close(fd);
			return (-1);
			}
		}

    /*Fermer le descripteur de fichier*/
	close(fd);

    /*Retourner 1 pour indiquer le succès*/
	return (1);
}