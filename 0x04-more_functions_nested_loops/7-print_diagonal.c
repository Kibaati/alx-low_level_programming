#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_diagonal - this is the function prints digonal on the traminal
 * @n: parameter to check
 * Return: void
 */

void print_diagonal(int n)
{
if (n <= 0)
putchar('\n');
else
{
int i, j;

for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j <= i ; j++)
putchar(' ');
putchar('\\');
putchar('\n');
}
}
}
