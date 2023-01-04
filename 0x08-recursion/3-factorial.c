#include "main.h"
/*
 * factorial - return factorial
 * @n: number
 * Return: int
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
return (factorial(n - 1) + factorial(n - 2));
}
