#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_line - print line on the terminal
 * @n: parameter to be cheked
 * Return: void
 */

void print_line(int n)
{
if (n <= 0)
putchar('\n');
else
{
int i;

for (i = 1 ; i <= n ; i++)
putchar('_');
putchar('\n');
}
}
