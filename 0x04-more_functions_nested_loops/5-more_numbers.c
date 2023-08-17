#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * more_numbers - print 10 times more
 * Return: void
 */

void more_numbers(void)
{
int i;
int j;

for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 15 ; j++)
{
putchar(j % 10 + '0');
}
putchar('\n');
}
putchar('\n');
}
