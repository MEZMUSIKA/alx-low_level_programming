#include "main.h"

/**
 *_strlen - a function that returns the length of a string
 *@s: string
 *
 * Return: the lenght of string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

