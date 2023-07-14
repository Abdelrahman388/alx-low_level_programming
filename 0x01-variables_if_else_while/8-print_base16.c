#include <stdio.h>

/**
 * main - entery point
 *
 * Description: print numbers of base 16 in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		if (digit ==7)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
