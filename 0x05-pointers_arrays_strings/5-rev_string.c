#include "main.h"

/**
 * rev_string - write a function that revers a string
 * @s: input of the function
 *
 */

void rev_string(char *s)
{
char t;
	int k, l, m;

l = 0;
m = 0;
while (s[l] != '\0')
{
	l++;
}
m = l - 1;
for (k = 0; k < l / 2; k++)
{
	t = s[k];
	s[k] = s[m];
	s[m--] = t;
}

}

