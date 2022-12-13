#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
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
}
