#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: parameter to check
 * Return: lenth of the string
 */

int _strlen(char *s)
{
int i;
int count = 0;

for (i =  0 ; s[i] != '\0' ; i++)
count++;
return (count);
}