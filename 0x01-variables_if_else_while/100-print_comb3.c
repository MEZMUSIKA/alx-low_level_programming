#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */

int main(void)
{
int ktr, num;

for (ktr = 0; ktr < 9; ktr++)
{
for (num = 0; num <= 9; num++)
{
if (!((ktr == num) || (ktr > num)))
{
putchar((ktr % 10) + '0');
putchar((num % 10) + '0');
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
