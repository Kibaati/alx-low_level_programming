#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the value of x raised to the power of y
 * @n: base number
 * Return: 0
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return  (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natuarl
 * @n: number to calculate the squre root of
 * @i: iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
