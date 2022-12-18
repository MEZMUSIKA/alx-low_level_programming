#include "main.h"
#include <stdio.h>

/**
 * main - print Fizz Buzz
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int a = (Fizz);
	int b = (Buzz);
	int ab = (FizzBuzz);

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d", a);
		}
		if (i % 5 == 0)
		{
			printf("%d", b);
		}
		if (i % 15 == 0)
		{
			printf("%d", ab);
		}
		else
		{
			printf("%d", i);
		}
		else if (i != 100)
		{
			printf(" ");
		}

		printf('\n');
		return (0);
}
}
