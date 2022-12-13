#include <stdio.h>
/**
 * main - prints alphabet 10 times
 *
 * Return: always 0.
 */
int main(void)
{
int i, j;
char a;
a = 'a';
for (j = 0 ; j < 10 ; j++)
{
for (i = 0 ; i < 26 ; i++)
{
putchar(a);
a++;
}
putchar('\n');
a = 'a';
}
return (0);
}
