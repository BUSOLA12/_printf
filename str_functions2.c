#include "main.h"
#include <stddef.h>

/**
* _strlen - a function that returns the length of a string
* @str: the string to be measured
*
* Return: the length of the string
*/
size_t _strlen(const char *str)
{
int len = 0;

while (str[len] != '\0')
{
len++;
}
return (len);
}

/**
* _strchr - a function that locates a character in a string
* @s: the string to be searched
* @c: the character to search for
*
* Return: a pointer to the first occurrence
*  of the character c in the string s, or
*  NULL if the character is not found
*/
char *_strchr(const char *s, int c)
{
while (*s != '\0')
{
if (*s == c)
return ((char *)s);
s++;
}
if (c == '\0')
return ((char *)s);
return (NULL);
}
