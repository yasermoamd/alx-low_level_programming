#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char output[] = "_putchar\n";
	int i;

	for (i = 0; output[i] != '\0'; i++)
	{
		/* Use the _putchar function to print each character */
		_putchar(output[i]);
	}

	return (0);
}

