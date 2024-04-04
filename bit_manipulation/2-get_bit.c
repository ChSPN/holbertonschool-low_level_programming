#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /* Check if index is greater than the number of bits in unsigned long int */
    if (index >= (sizeof(unsigned long int) * 8))
        return -1;

    /* Shift the bit at the given index to the least significant position */
    n >>= index;

    /* Return the least significant bit */
    return (n & 1);
}