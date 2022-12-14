#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 *
 * @k: number digits
 *
 * Return: 0
 */
int print_last_digit(int k)
{
int ln = k % 10;

if (ln < 0)
ln *= -1;
_putchar(ln + '0');
return (ln);
}
