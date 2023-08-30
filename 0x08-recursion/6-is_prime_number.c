#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: base number
 * Return: 0
 */

int is_prime_number(int n)
{
if (n <= 1)
return  (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recur
 * @n: number to evalute
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int i)
{
if (i == n)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}
