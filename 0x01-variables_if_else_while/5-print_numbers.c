#include <stdio.h>

/**
 * main - entery point
 *
 * Description: print all single digit numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar("%i", digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
