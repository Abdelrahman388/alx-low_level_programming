#include "main.h"

/**
 * main - entery point
 *
 * Description: prints the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: always 0
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, s;
	float ts;

	while (1)
	{
		s = fib1 + fib2;

		if (s > 4000000)
			break;

		if ((s % 2) == 0)
			ts += s;

		fib1 = fib2;
		fib2 = s;
	}
	printf("%.0f\n", ts);

	return (0);
}
