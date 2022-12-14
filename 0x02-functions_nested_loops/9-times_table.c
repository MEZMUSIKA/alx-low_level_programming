#include "main.h"
/**
 * times_table - print 9x table
 *
 * Return: 0
 */
void times_table(void)
{
int dig, mul, res;

for (dig = 0; dig <= 9; dig++)
{
_putchar('0');
for (mul = 1; mul <= 9; mul++)
{
_putchar(',');
_putchar(' ');
res = dig * mul;
if (res <= 9)
_putchar(' ');
else
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
