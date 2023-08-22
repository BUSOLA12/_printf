#include "main.h"

/**
* handling_others - a function that handles other format specifiers
* @next: the next character after the % symbol
*
* Return: the number of characters printed
*/
int handling_others(char next)
{
int count = 0;

if (_strchr("scidburoxX", next) == NULL)
{
if (next != '%')
{
_putchar('%');
}
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


/**
 * handling_rstr - a functiom that handles reversed string
 * @next: the next character afters the % symbol
 * @args: the list of arguments
 *
 * Return: the number of characters printed
 */
int handling_rstr(char next, va_list args)
{
	char *str;
	int count;

	if (next == 'r')
	{
		str = va_arg(args, char *);
		count = print_reverse(str);
		return (count);
	}
	return (0);
}

/**
 * handling_hex - handles the hexadecimal conversion specifier
 * @next: the next character after the specifier
 * @args: the argument list
 *
 * Return: the number of characters printed
 */

int handling_hex(char next, va_list args)
{
	unsigned int value;
	char *hex;
	int count;

	if (next == 'x')
	{
		value = va_arg(args, unsigned int);
		hex = uint_to_hex(value);
		count = print_hex(hex);
		return (count);
	}
	return (0);
}
