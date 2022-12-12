#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */

int main(void)
{
	int ktr, num;

	for (ktr = 0; ktr < 10; ktr++)
	{
		for (num = 0; num < 10; num++)
		{
			putchar((ktr % 10) + '0');
			putchar((num % 10) + '0');
		}

			if (ktr == 9 && num == 9)
			{
			putchar(',');
			putchar(' ');
			}

	}

	putchar('\n');
	return (0);
}
