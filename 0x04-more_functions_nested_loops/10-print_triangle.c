#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 *
 *Return: 0
 */

void print_triangle(int size)
{
int a = 0, b = size, c;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (c = 0; c < b; c++)
{
while (a < b)
{
if ((a + c + 1) >= b)
_putchar('#');
else
_putchar(' ');
a++;
}
a = 0;
_putchar('\n');
}
}
}


