#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
*/

void print_numbers(void)
{
	for ( int i = 0; i <= 9; i++)
	{
		_putchar("%d", i + 48);
	}
	_putchar("\n");
}

