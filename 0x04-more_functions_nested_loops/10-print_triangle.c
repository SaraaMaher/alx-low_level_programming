#include <stdio.h>
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
putchar('\n');
return;
}
for (i = 1 ; i <= size ; i++)
{
j = size - i;
while (j != 0)
{
putchar(' ');
j--;
}
k = i;
while (k != 0)
{
putchar('#');
k--;
}
putchar('\n');
}
}
