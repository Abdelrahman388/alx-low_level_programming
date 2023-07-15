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
	int digit1 = 0, digit2;

	while (digit <= 9)
	{
		digit2 = 0;
		while (digit2 <= 0)
		{
			if(digit1 != digit2 && digit1 < digit 2)
			{
				putchar(digit + 48);
				putchar(digit + 48);

				if (digit1 + digit2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');

	return (0);
}
