#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */

int main(void)
{
int ktr = 0;
int num = 0;

for (ktr = 0; ktr < 9; ktr++)
{
for (num = 0; num <= 9; num++)
{
if (!((ktr == num) || (ktr > num)))
{
putchar(ktr);
putchar(num);
}
if ((!(num == 9 && ktr == 8)))
{
putchar(',');
putchar(' ');
}

}

}

putchar('\n');
return (0);
}
