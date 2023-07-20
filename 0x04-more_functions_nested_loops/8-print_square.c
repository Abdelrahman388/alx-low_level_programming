#include "main.h"

/**
 * print_square - print a diagonal
 *
 * @size: the square size
 *
 * Return : 0
*/

void print_square(int size)
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= size; p++)
		{
			for (s = 1; s <= size; s++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
