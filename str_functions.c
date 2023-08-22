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

/**
* uint_to_octal - a function that converts an
* unsigned int into its octal notation
* @n: the unsigned integer to be converted
*
* Return: a pointer to the octal notation of n
*/
char *uint_to_octal(unsigned int n)
{
char *octal;
int i, j, rem;
int len = 0;
unsigned int temp = n;

while (temp > 0)
{
len++;
temp /= 8;
}

octal = malloc(len + 1);

i = 0;
while (n > 0)
{
rem = n % 8;
octal[i++] = rem + '0';
n /= 8;
}

octal[i] = '\0';

for (j = 0; j < i / 2; j++)
{
char temp = octal[j];
octal[j] = octal[i - j - 1];
octal[i - j - 1] = temp;
}

return (octal);
}


#include <stdlib.h>

/**
* uint_to_hex - converts an unsigned int to a hexadecimal string
* @n: the unsigned int to convert
*
* Return: the resulting hexadecimal string
*/
char *uint_to_hex(unsigned int n)
{
char *hex = malloc(9);
char *hex_digits = "0123456789abcdef";
int i = 7;

if (!hex)
return (NULL);

hex[8] = '\0';

while (n)
{
hex[i--] = hex_digits[n % 16];
n /= 16;
}

while (i >= 0)
hex[i--] = '0';

return (hex);
}


#include <stdlib.h>

/**
* uint_to_hex_upper - converts an unsigned int to a hexadecimal string
* @n: the unsigned int to convert
*
* Return: the resulting hexadecimal string
*/
char *uint_to_hex_upper(unsigned int n)
{
char *hex = malloc(9);
char *hex_digits = "0123456789ABCDEF";
int i = 7;

if (!hex)
return (NULL);

hex[8] = '\0';

while (n)
{
hex[i--] = hex_digits[n % 16];
n /= 16;
}

while (i >= 0)
hex[i--] = '0';

return (hex);
}

