#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elemnt of array
 * followed by new line
 * @a: array to be print
 * @n: how many time to print
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m == 0)
		{
			printf("%d", a[m]);
		}
		else
		{
	printf(", %d", a[m]);
		}
		printf("\n");
	}
}

