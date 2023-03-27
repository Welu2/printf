#include <unistd.h>

/**
 * _putchar - writes the charcter w to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned , and ernno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
