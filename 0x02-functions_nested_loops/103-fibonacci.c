#include <stdio.h>

/**
 * main - prints the first sum of Fibonacci numbers
 * Return: always 0
 */
int main(void)
{
int i = 0;
unsigned long n1 = 0, n2 = 1, n3;
while (n3 < 4000000)
{
n3 = n1 + n2;
if (n3 % 2 == 0)
i += n3;
n1 = n2;
n2 = n3;
}
printf("%d\n", i);
return (0);
}
