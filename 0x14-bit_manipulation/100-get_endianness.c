#include "main.h"

/**
 * get_endianness - checks the endianness of the current system.
 * Return:
 * 1 if the system is little-endian.
 * 0 if the system is big-endian.
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	if (*byte_ptr)
		return (1);
	return (0);
}
