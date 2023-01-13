#include "main.h"

/*
 * *malloc_checked - Write a function that allocates memory
 *@b: memories
 *
 * Return: a pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
	{
		exit(98);
	}
	return (p);
}
