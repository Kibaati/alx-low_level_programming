#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *print_square - prints square  on the treminal
 *@size: size of square
 *Return: void
 */

void print_square(int size)
{
if (size <= 0)
putchar('\n');
else
{
int i, j;

for (i = 1 ; i <= size ; i++)
{
for (j = 1 ; j <= size ; j++)
putchar('#');
putchar('\n');
}
}
}
