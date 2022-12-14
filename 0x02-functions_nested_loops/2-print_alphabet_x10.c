#include "main.h"
/**
 * print_alphabet_x10 - Print the lowercase
 * ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
int kotari = 0;
int fidel;


while (kotari++ <= 9)
{
for (fidel = 'a'; fidel <= 'z'; fidel++)
{
_putchar(fidel);
}
_putchar(10);
kotari++;
}
}
