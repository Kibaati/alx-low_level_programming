#include <stdio.h>

/**
 * main - is it main function
 *
 * Return: is mostly 0
 */
int main(void)
{
char i;

for (i = 'a' ; i <= 'z' ; i++) 
if (i != 'q' && i != 'e')
putchar(i);
putchar('\n');
return (0);	
}	
