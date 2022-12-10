#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int lw;

for (lw = 'a'; lw <= 'z'; lw++)
{
if ((lw != 'q') && (lw != 'e'))
putchar(lw);
}
putchar('\n');
return (0);
}
