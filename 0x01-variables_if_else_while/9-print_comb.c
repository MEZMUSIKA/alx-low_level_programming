#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int ktr;

	for (ktr = 0; ktr <= 9; ktr++)
	{
		putchar((ktr % 10) + '0');
	if (ktr == 9)

		continue;

			putchar(',');
			putchar(' ');
	}
		putchar('\n');
		return (0);
}
