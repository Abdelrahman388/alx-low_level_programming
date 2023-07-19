#include "main.h"

/**
 * print_sign - print + if integer is positive &
 * - if it is negative and 0 if it is zero
 *
 * @n: takes integer tyoe input for function
 *
 * Return: 1 if +, 0 if 0and -1 if -
*/

int print_sign(int n)
{
	if (n >	0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
