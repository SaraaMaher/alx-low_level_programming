#include <stdio.h>

/**
 * main - prints alphabet in lower case
 *
 * Return: always 0.
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
putchar('\n');
return (0);
}
