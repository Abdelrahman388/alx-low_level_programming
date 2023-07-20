#include "main.h"

/**
 * print_square - print a diagonal
 *
 * @n: the number of times
*/

void print_square(int size)
{
	int p, s;

	for (p = 1; p <= size; p++)
	{
		for (s = 1; s <= size; s++)
			_putchar('35');
		_putchar('\n');
	}
}

