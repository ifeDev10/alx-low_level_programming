#include <unistd.h>

/**
 * _putchar - Write the character c to stdout
 * @c: The character tp print
 *
 * Return: on success 1
 * On error, -1 is returned an error is set approximately.
 */

int _putchar(char n)
{
	return (write(1, &c, 1));
}
