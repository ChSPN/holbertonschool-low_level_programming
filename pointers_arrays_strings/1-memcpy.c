/**
 * _memcpy - prints buffer in hexa
 * @n: the address of memory to print
 * @s: the size of the memory to print
 * @b: explications
 * Return: Nothing.
 */
char *_memcpy(char *s, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		/* Affectation de l'indexe i de s avec la valeur de l'indexe i de b. */
		s[i] = b[i];
	}

	return (s);
}
