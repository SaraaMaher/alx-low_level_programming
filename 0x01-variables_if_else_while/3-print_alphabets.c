#include <stdio.h>
/**
 * main Prints alphabet lower and uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
char a, A;
a = 'a';
A = 'A';
for (i = 0 ; i < 26 ; i++)
{
putchar(a);
a++;
}
for (i = 0 ; i < 26 ; i++)
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}
