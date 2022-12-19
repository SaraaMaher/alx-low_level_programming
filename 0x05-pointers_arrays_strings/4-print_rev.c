#include <stdio.h>
/**
 * print_rev - at prints a string, in reverse
 * @s: pointer
 * Return: void
 */
void print_rev(char *s)
{
int l = _strlen(s);
char *end;
end = s + l - 1;
while (l != 0)
{
putchar(*end);
end--;
}
putchar('\n');
}
