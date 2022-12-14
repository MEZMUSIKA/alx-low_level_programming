#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: the character to check
 * Return: 1 if c is lowercase, otherwise 0.
 */
int _islower(int c)
{
for (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
