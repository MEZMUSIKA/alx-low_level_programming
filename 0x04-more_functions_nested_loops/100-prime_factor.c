#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 * Return: 0
 */

int main(void)
{
long int m = 612852475143;
long int pn;

for (pn = 2; pn < m; pn++)
{
if (m % pn == 0)
{
m = m / pn;
}
}
printf("%ld\n", pn);
return (0);
}
