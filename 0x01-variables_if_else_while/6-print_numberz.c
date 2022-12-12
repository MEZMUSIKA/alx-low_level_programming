#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
int ktr;

ktr = 0;
while (ktr < 10)
{
putchar(ktr + '0');
ktr++;
}
putchar('\n');
return (0);
}


