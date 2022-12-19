#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
int l, i;
char v;
for (l = 0 ; s[l] != '\0' ; l++)
{
}
l--;
for (i = 0 ; i != l ; i++)
{
swap_char(s[l], s[i]);
l--;
}
}
/**
 * swap_char - swap two chars
 * @a: first
 * @b: second
 * Return: void
 */
void swap_char(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}
