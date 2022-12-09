#include <stdio.h>
/**
 * main - prints alphabet in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
char a;
a = 'z';
for (int i = 0 ; i < 26 ; i++)
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
