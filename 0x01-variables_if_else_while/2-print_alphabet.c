#include <stdio.h>

/**
 * main - Print alphabet in lower case
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
char a;
a = 'a';
for (i = 0 ; i < 26 ; i++)
{
putchar(a);
a++;
}
return (0);
}
