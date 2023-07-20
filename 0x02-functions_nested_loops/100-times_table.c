#include "main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int p, m, x;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <=  n; x++)
		{
			_putchar(48);
			for (m = 0; m <=  n; m++)
			{
				_putchar(',');
				_putchar(' ');

				p = x * m;

				if (p <=  9)
					_putchar(' ');
				if (p <=  99)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				} else if (p <= 99 && p >= 10)
					_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
