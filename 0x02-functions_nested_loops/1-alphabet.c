#include <stdio.h>

/**
 * print_alphabet - prints alphabet in lower case
 *
 * Return: void
 */

void print_alphabet(void)
{
int i;
char a;
a = 'a';
for (i = 0 ; i < 26 ; i++)
{
putchar(a);
a++;
}
putchar('\n');
}
