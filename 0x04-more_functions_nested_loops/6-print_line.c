#include "main.h"

/**
 * print_line - 0rint a straight line
 *
 * @n: the number of times
*/

void print_line(int n)
{
	int lnch;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnch = 1; lnch <= n; lnch++)
			_putchar('_');
		_putchar('\n');
	}
}
