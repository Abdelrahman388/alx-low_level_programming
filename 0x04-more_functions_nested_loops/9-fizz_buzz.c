#include "main.h"
#include <stdio.h>

/**
 * main - entery point 1 - 100 followed by a new line
 * 	numbers that are multiplies of 3 print Fizz
 * 	numbers that are multiplies of 5 print Buzz
 * 	numbers that are multiplies of 3 and 5 print FizzBuzz
 * 	each number and word are separated by a space
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			ptintf("\n");
	}

	return (0);
}
