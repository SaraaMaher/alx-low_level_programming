#include <stdio.h>
/**
 * main - print multiples of 3 and 5
 *
 * Return: always 0.
 */
int main(void)
{
int i;
for (i = 0 ; i < 1024 ; i++)
{
if (i % 3 == 0 || i % 5 == 0)
printf("%d", i);
}
putchar('\n');
return (0);
}
