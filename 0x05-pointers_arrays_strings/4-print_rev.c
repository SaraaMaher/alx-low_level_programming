#include <stdio.h>
#include "main.h"
/**
 * print_rev - at prints a string, in reverse
 * @s: pointer
 * Return: void
 */
void print_rev(char *s)
{
int i;
for (i = 0 ; s[i] != '\0' ; i++)
{
}
for (i = i - 1 ; i >= 0 ; i--)
{
putchar(s[i]);
}
putchar('\n');
}
