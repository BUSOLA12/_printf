#include <stdarg.h>
#include "main.h"
/**
* _printf - a function that produces output according to a format
* @format: character string
*
* Return: the number of characters
*  printed (excluding the null
*  byte used to end output to strings)
*/
int _printf(const char *format, ...)
{
int value;
char *str = "(null)";
int j = 0;
size_t count;
char next;
size_t i;
va_list args;
va_start(args, format);
count = 0;

for (i = 0; i < _strlen(format); i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
count += 1;
}
else
{
next = format[i + 1];
if (next == 'c')
{
value = va_arg(args, int);
if (value == '\0')
{
while (str)
{
_putchar(str[j]);
j++;
}
}
else
{
_putchar(value);
count += 1;
}
}
count += handle_format_specifiers(next, args);
i++;
}
}
va_end(args);
return (count);
}
