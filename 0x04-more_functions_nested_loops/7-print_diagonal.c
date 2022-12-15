#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
putchar('\n');
return;
}
for (i = 0 ; i < n ; i++)
{
j = i;
while (j != 0)
{
putchar(' ');
j--;
}
putchar('\\');
putchar('\n');
}
}
