#include "main.h"
/**
 * print_alphabet_x10 - Print the lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
char f;
int k = '0';

while (k++ < 10)
{
for (f = 'a'; f <= 'z'; f++)
_putchar(f);
f++;
}
_putchar('\n');
}
