#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: number
 * Return: void
 */
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
putchar('-');
num = -n;
}

if (num / 10)
{
print_number(num / 10);
}
putchar((num % 10) + '0');
}
