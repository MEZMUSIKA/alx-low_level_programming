#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
char la;

la = 'z';
while (la >= 'a')
{
putchar(la);
la--;
}
putchar('\n');
return (0);
}

