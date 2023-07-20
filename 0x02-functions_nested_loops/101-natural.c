#include "main.h"

/**
 * main - entery point
 *
 * Description: computes the sum of all multiples of 3 or 5
 *
 * Return: always 0
*/

int main(void)
{
	int s, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s += n;
	}
	printf("%d\n", s);

	return (0);
}
