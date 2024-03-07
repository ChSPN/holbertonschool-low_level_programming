#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * Description: function that prints a string, followed by a new line
 * @s: le pointeur de la chaine de caracteres a afficher
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		/* envoie le pointeur mémoire s, et non pas la valeur */
		_puts_recursion(s);
	}
}
