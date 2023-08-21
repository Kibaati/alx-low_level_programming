#include "main.h"

/**
 * swap_int - swap two integers together
 * @a: parameter to check
 * @b: parameter to check
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
