#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that prints a reverse string.
 * rev_print - function that displays the string in reverse.
 * _putchar - function that displays the string in reverse.
 * Description: function that prints a reverse string.
 * @s: chaine de caracteres "My School".
 * Return: blabla
 */
void rev_string(char *s)
{
int i, j;
int temp;
int count_letters;

for (i = 0; s[i] != '\0'; i++)
{
	count_letters++;
}
count_letters--;

for (i = count_letters - 1; i >= count_letters / 2; i--)
{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	j++;
}
}
