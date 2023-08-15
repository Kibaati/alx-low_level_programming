#include "main.h"
/**
 * print_last_digit - print last digit of character
 * @k: parameter function
 * Return: 0
 */
int print_last_digit(int k)
{
int i;

i = k % 10;
if (k < 0)
i = -i;
_putchar(i + '0');
return (i);
}
