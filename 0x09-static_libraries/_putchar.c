#include <unistd.h>

/**
 * _putchar - writes character c to stout
 *
 * Return: 1 on succes anf -1 on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
