#include <stdio.h>
/**
 * main - print 16 base numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
char a;
a = 'a';
for (i = 0 ; i < 10 ; i++)
{
putchar((i % 10) + '0');
}
for (i = 0 ; i < 6 ; i++)
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
