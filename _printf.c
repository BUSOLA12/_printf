#include <stdarg.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
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
int count;
char next;
size_t i;
va_list args;
va_start(args, format);
count = 0;

if (format == NULL)
{
exit(1);
}
if (_strcmp(format, "%") == 0)
{
count = -1;
va_end(args);
return (count);
}
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
_putchar(value);
count += 1;
}
count += handle_format_specifiers(next, args);
i++;
}
}
va_end(args);
return (count);
}
