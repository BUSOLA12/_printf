#include "main.h"

/**
* handling_int - a function that handles the integer format specifier
* @next: the next character after the % symbol
* @args: the list of arguments
*
* Return: the number of characters printed
*/
int handling_int(char next, va_list args)
{
int num;
int count = 0;

if (next == 'd' || next == 'i')
{
num = va_arg(args, int);
print_int(num);
count += count_int_chars(num);
return (count);
}
return (0);
}
/**
* handling_string - a function that handles the string format specifier
* @next: the next character after the % symbol
* @args: the list of arguments
*
* Return: the number of characters printed
*/
int handling_string(char next, va_list args)
{
char *str;
int count = 0;

if (next == 's')
{
str = va_arg(args, char *);
print_string(str);
count += _strlen(str);
return (count);
}
return (0);
}
/**
* handling_others - a function that handles other format specifiers
* @next: the next character after the % symbol
*
* Return: the number of characters printed
*/
int handling_others(char next)
{
int count = 0;

if (_strchr("scidbu", next) == NULL)
{
_putchar('%');
_putchar(next);
count += 1;
return (count);
}
return (0);
}
/**
* handling_bicon - a function that handles binary conversion format specifier
* @next: the next character after the % symbol
* @args: the list of arguments
*
* Return: the number of characters printed
*/
int handling_bicon(char next, va_list args)
{
unsigned int base_ten;
char *result;
int count;

if (next == 'b')
{
base_ten = va_arg(args, unsigned int);
result = int_to_binary(base_ten);
count = print_binary(result);
return (count);
}
return (0);
}



/**
* handling_uint - a function that handles unsigned integer format specifier
* @next: the next character after the % symbol
* @args: the list of arguments
*
* Return: the number of characters printed
*/
int handling_uint(char next, va_list args)
{
unsigned int value;
int count;

if (next == 'u')
{
value = va_arg(args, unsigned int);
count = print_uint(value);
return (count);
}
return (0);
}
