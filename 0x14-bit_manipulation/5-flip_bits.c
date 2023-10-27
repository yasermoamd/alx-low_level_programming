#include "main.h"

/**
 * flip_bits - Count differing bits between two numbers.
 * @n: The first number.
 * @m: The second number.
 * Return:
 * The count of differing bits, representing the number of bits that
 * need to be flipped to transition from 'n' to 'm'.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m; /* Find differing bits. */
	unsigned int bit_diff_counter = 0; /* Initialize the count. */

	while (xor_result != 0)
	{
		bit_diff_counter += xor_result & 1; /* Count each set bit. */
		xor_result >>= 1; /* Shift right to check the next bit. */
	}

	return (bit_diff_counter); /* Return the count of differing bits. */
}
