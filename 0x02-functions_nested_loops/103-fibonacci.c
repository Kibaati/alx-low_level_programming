#include <stdio.h>
/**
 * main - this is important
 * less than 4000000.
 * Return: 0
 */

int main(void)
{
int i = 0;
long j = l, k = 2, sum = k;

while (k + j < 4000000)
{
k += j;
if (k % 2 == 0)
sum += k;
j = k - j;
++i;
}
printf("\n");
return (0);
}
