#include "main.h"

/**
 * print_line - 0rint a straight line
 *
 * @n: the number of times
*/

void print_line(int n)
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (s = 1; s <= p; s++)
				_putchar(' ');
			_putchar('\');
			_putchar('\n');
		}
	}
}
