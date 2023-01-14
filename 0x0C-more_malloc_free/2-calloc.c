#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * _calloc - Write a function that allocates memory for an array
 *
 * @nmenb: elements
 * @size: bytes
 *
 * Return: if nmemb or size is 0 - NULL; otherwise the pointer
 *
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (!a)
		return (NULL);
	b = a;
	for (i = 0; i < (size * nmemb); i++)
		b[i] = '\0';
	return (a);
}
