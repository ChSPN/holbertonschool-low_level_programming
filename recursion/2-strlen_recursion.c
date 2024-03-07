#include "main.h"
#include <stdlib.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * Description: function that returns the length of a string
 * @s: le pointeur de la chaine de caracteres a afficher
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
