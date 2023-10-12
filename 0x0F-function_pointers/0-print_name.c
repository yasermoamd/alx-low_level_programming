#include <stdio.h>
#include "function_pointer.h"
/**
 * print_name - function that print a name.
 * @name: type string.
 * @f: Type pointer func & char is arg.
 */
void print_name(char *name, void (*f)(char *))
{
	if (d == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
