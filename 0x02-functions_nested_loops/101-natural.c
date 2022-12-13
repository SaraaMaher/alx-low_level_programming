#include <stdio.h>
/**
 * main - print multiples of 3 and 5
 *
 * Return: always 0.
 */
int main(void)
{
int i, x;
x = 0;
for (i = 0 ; i < 1024 ; i++)
{
if (i % 3 == 0 || i % 5 == 0)
x = x + i;
}
printf("%d", x);
putchar('\n');
return (0);
}
