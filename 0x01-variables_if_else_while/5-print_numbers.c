#include <stdio.h>
/**
 * main - print all num from 0 to 9
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
putchar((i % 10) + '0');
}
putchar('\n');
return (0);
}
