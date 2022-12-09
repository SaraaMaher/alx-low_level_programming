#include <stdio.h>

/**
 * main - Print alphabet in lower case except q and e
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
if (a != 'q' && a != 'e')
putchar(a);
a++;
}
putchar('\n');
return (0);
}
