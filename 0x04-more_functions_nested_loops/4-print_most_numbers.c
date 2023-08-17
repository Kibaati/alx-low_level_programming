#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_most_numbers - print most number expet 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
{
if (i != 2 && i != 4)
putchar(i + '0');
}
putchar('\n');
}
