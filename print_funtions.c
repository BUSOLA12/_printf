#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
* _putchar - a function that writes a character to stdout
* @c: the character to be written
*
* Return: the number of characters written, or -1 on error
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* print_string - a function that prints a string to stdout
* @str: the string to be printed
*/
void print_string(const char *str)
{
int len;
len = _strlen(str);
write(1, str, len);
}

/**
* print_int - a function that prints an integer to stdout
* @n: the integer to be printed
*/
void print_int(int n)
{
char buffer[20];
int i = 0;
int neg = 0;

if (n == 0)
{
write(1, "0", 1);
return;
}

if (n < 0)
{
neg = 1;
n = -n;
}

while (n > 0)
{
buffer[i++] = (n % 10) + '0';
n /= 10;
}

if (neg)
{
buffer[i++] = '-';
}
while (--i >= 0)
{
write(1, &buffer[i], 1);
}
}

