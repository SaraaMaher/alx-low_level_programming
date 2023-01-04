/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
while (*s)
{
putchar(*s);
s++;
_puts_recursion(s);
}
}
