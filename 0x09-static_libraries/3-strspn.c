#include "main.h"

/**
* _strspn - locates character in a string
* @s: string to search
* @accept: character to search in s
* Return: number of characters matched
*/

unsigned int _strspn(char *s, char *accept)
{
int i, j;

for (i = 0 ; s[i] != '\0' ; i++)
{
for (j = 0 ; s[i] != accept[j] ; j++)
{
if (accept[j] == '\0')
return (i);
}
}
return (0);
}
