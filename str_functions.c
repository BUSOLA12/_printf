#include "main.h"
#include <stddef.h>


/**
* count_int_chars - a function that counts the
* number of characters in an integer
* @num: the integer to be counted
*
* Return: the number of characters in the integer
*/
int count_int_chars(int num)
{
int count = 0;

if (num == 0)
{
return (1);
}
if (num < 0)
{
count++;
num = -num;
}
while (num > 0)
{
count++;
num /= 10;
}
return (count);
}


/**
* int_to_binary - a function that converts an integer to binary
* @n: the integer to be converted
*
* Return: a pointer to the binary representation of n
*/
char *int_to_binary(unsigned int n)
{
char *result;
int len;
char buffer[33];
int i = 0;
while (n > 0)
{
buffer[i++] = (n % 2) + '0';
n /= 2;
}
buffer[i] = '\0';
len = strlen(buffer);
result = malloc(len + 1);
for (i = 0; i < len; i++)
{
result[i] = buffer[len - i - 1];
}
result[len] = '\0';
return (result);
}
