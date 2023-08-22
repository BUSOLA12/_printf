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
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}

/**
* print_int - a function that prints an integer to stdout
* @n: the integer to be printed
*/
void print_int(int n)
{
char digit_buffer[20];
int i = 0;
int neg = 0;

if (n == 0)
{
_putchar('0');
return;
}

if (n < 0)
{
neg = 1;
n = -n;
}

while (n > 0)
{
digit_buffer[i++] = (n % 10) + '0';
n /= 10;
}

if (neg)
{
digit_buffer[i++] = '-';
}

while (--i >= 0)
{
_putchar(digit_buffer[i]);
}
}

/**
* print_reverse - prints a string in reverse
* @str: string to print
*
* Return: number of characters printed
*/
int print_reverse(char *str)
{
int len = strlen(str);
int i;
for (i = len - 1; i >= 0; i--)
{
_putchar(str[i]);
}
return (len);
}


#include <stddef.h>

/**
* print_hex - prints a hexadecimal string using _putchar
* @hex: the hexadecimal string to print
*
* Return: the number of characters printed
*/
int print_hex(char *hex)
{
int count = 0;

if (!hex)
return (0);

while (*hex)
{
_putchar(*hex++);
count++;
}

return (count);
}

