#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lw;
	int UP;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		putchar(lw);
	}
	for (UP = 'A'; UP <= 'Z'; UP++)
	{
		putchar(UP);
	}
	putchar('\n');
	return (0);
}
