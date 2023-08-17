#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_numbers - print number 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
putchar(i + '0');
putchar('\n');
}
