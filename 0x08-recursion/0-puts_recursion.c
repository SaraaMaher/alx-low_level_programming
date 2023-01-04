#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
while (*s)
{
_putchar(*s);
s++;
_puts_recursion(s);
}
_putchar('\n');
}
