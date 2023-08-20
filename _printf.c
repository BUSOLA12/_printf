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
size_t count;
int temp_count;
char next;
size_t i;
va_list args;
va_start(args, format);
count = 0;
temp_count = 0;

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
_putchar(va_arg(args, int));
count += 1;
}
temp_count = handling_int(next, args);
count += temp_count;
temp_count = handling_string(next, args);
count += temp_count;
temp_count = handling_others(next);
count += temp_count;
temp_count = handling_bicon(next, args);
count += temp_count;
temp_count = handling_uint(next, args);
count += temp_count;
i++;
}
}
_putchar('\n');
va_end(args);
return (count);
}
