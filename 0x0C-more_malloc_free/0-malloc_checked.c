#include "main.h"
#include <stdlib.h>

/*
 * *malloc_checked - Write a function that allocates memory
 *@b: memories
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
