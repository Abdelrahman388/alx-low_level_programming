#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
*/

void print_most_numbers(void)
{
	for ( int i = 0; i <= 9; i++)
	{
		if ((i != 2) || (i != 4))
			_putchar("%d", i + 48);
	}
	_putchar("\n");
}

