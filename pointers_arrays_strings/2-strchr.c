#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Search character in pointer.
 * Description: Search character in pointer.
 * @s: pointer
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;

	/* Boucle jusqu'au caractère de fin \0 */
	while (*s != '\0')
	{
		/* Comparaison entre la valeur du pointeur actuel de s et c */
		if (*s == c)
		{
			/* Affectation de l'adresse mémoire actuel de s dans le pointeur p. */
			p = s;
			break;
		}

		s++;
	}

	/* Vérification de la recherche du caractère de fin. */
	if (*s == c)
	{
		p = s;
	}

	return (p);
}
