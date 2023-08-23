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

/**
* _strcmp - compares two strings
* @s1: first string to compare
* @s2: second string to compare
*
* Description: This function compares
* two strings character by character.
* It takes two const char * arguments,
* representing the two strings to
* compare, and returns an int value
* indicating the result of the comparison.
*
* Return: 0 if s1 and s2 are equal,
* a positive value if s1 is greater than s2,
* or a negative value if s1 is less than s2.
*/
int _strcmp(const char *s1, const char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}

