#include <stddef.h> /* For NULL */

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing the binary number.
 *
 * Return: The converted number, or 0 if there is one or more chars
 *         in the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	/* Check if the input string is NULL */
	if (b == NULL)
		return (0);

	/* Iterate through the input string */
	while (*b)
	{
		/* If a character is not '0' or '1', return 0 */
		if (*b != '0' && *b != '1')
			return (0);

		/* Shift the result left by 1 bit and add the current binary digit */
		result = (result << 1) + (*b - '0');

		/* Move to the next character in the string */
		b++;
	}

	/* Return the converted result */
	return (result);
}