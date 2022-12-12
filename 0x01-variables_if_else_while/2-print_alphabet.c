#include <stdio.h>
#include <ctype.h>
/**
 * main - main entry
 * Return: 0
 */
int main(void)
{
int c = 'a';
while (c <= 'z')
{
putchar(c);
c += 1;
}
putchar('\n')
return (0);
}
