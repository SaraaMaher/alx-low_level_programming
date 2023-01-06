#include <stdio.h>
#include <stdlib.h>
/**
 * main - min num
 * @argc: size
 * @argv: array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int coins, i, r;
if (argc != 2)
{
printf("Error\n");
return (1);
}
coins = atoi(argv[1]);
r = 0;
if (coins < 0)
{
printf("0\n");
return (0);
}
while (coins)
{
if (coins >= 25)
i = 25;
else if (coins >= 10)
i = 10;
else if (coins >= 5)
i = 5;
else if (coins >= 2)
i = 2;
else
i = 1;
r += coins / i;
coins = coins % i;
}
printf("%d\n", r);
return (0);
}
