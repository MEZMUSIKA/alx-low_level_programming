#include <stdio.h>

/**
 * main - Etry point
 *
 * Return: 0
 */

int main(void)
{
	char hex;

	while ((hex = '0') & (hex <= '9'))
	{
		putchar(hex);
		hex++;
	}
	while ((hex = 'a') & (hex <= 'f'))
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
