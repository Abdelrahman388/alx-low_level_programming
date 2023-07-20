#include "main.h"

/**
 * print_square - print a square
 *
 * @size: the square size
 *
 * Return : 0
*/

void print_square(int size)
{
	int p, s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= size; p++)
		{
			for (s = 1; s <= size; s++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
