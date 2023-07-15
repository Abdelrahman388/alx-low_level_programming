#include <stdio.h>

/**
 * main - entery point
 *
 * Description: print non repeating triple digit combinations
 *
 * Return: 0 (success)
*/

int main(void)
{
	int firstdigit = 0, seconddigit;

	while (firstdigit <= 99)
	{
		secobddigit = firstdigit;
		while (seconddigit <= 99)
		{
			if (seconddigit != firstdigit)
			{
				putchar((firstdigit / 10) + 48);
				putchar((firstdigit % 10) + 48);
				putchar(' ');
				putchar((seconddigit / 10) + 48);
				putchar((seconddigit % 10) + 48);

				if (firstdigit != 98 || seconddigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconddigit++;
		}
		firstdigit++;
	}
	putchar('\n');

	return (0);
}
