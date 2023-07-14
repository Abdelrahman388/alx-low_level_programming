#include <stdio.h>

/**
 * main - entery point
 *
 * Description: print all single digit numbers using putchar wit int variable
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
