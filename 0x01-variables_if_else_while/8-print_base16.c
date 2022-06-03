#include <stdio.h>
/**
 * main - prints the last digit of the random
 *
 * it excutes and prints it
 * Return: Always 0 (Success)
 */

int main(void)
{
char base_16;
int n;
for (n = 0; n <= 9; n++)
{
putchar(n);
}
for (base_16 = 'a'; base_16 <= 'f'; base_16++)
{
putchar(base_16);
}
putchar('\n');
return (0);
}
