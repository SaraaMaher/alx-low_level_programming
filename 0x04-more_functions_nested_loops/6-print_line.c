#include <stdio.h>
/**
 * print_line -  draws a straight line in the terminal
 * @n: length of line
 * Return: void
 */
void print_line(int n)
{
int i;
if (n <= 0)
putchar('\n');
else
{
for (i = 0 ; i < n ; i++)
{
putchar('_');
}
putchar('\n');
}
}
