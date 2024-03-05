#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - function that gets the length of a prefix substring
 * Description: function that gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = NULL;
	int count = 0;
	int i;
	int isOk = 0;

	/* Calcul du nombre de caractères de accept. */
	while (*accept != '\0')
	{
		count++;
		accept++;
	}
	/* Remise au début de l'adresse mémoire du pointeur accept. */
	for (i = 0; i < count; i++)
	{
		accept--;
	}
	/* Boucle sur le caractère de fin. */
	while (*s != '\0')
	{
		/* Boucle sur le nombre de caractères de accept. */
		for (i = 0; i < count; i++)
		{
			/* Test la valeur de la valeur de l'indexe et de s. */
			if (accept[i] == *s)
			{
				/* Variable qui sert à l'arrêt de la boucle. */
				isOk = 1;
				/* Récupération de l'adresse mémoire de s. */
				p = s;
				/* Arrêt du for */
				break;
			}
		}
		/* Si caractère accept trouvé, arrêt de la boucle. */
		if (isOk == 1)
			break;
		s++;
	}
	return (p);
}
