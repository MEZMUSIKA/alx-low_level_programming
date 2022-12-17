#include "main.h"

/**
 * main - print Fizz Buzz
 *
 * Return: 0
 */

int main(void)
{
	int f;
	char a = "Fizz";
		char b = "Bazz";
		char ab = "FizzBazz";

	for (f = 1; f <= 100; f++)

	{
		if (f == 100)
			printf("%s", b);
		else if (f % 3 == 0)
			printf("%s ", a);
		else if (f % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", f);
		else if ((f % 3 == 0) && (f % 5 == 0))
			printf("%s ", ab);
	}
	printf("\n");
	return (0);
}
