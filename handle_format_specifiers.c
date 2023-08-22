#include "main.h"

/**
* handle_format_specifiers - a function that handles format specifiers
* @next: the next character after the % symbol
* @args: the list of arguments
*
* Return: the number of characters printed
*/
int handle_format_specifiers(char next, va_list args)
{
int count;
int temp_count;

count = 0;
temp_count = 0;
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
temp_count = handling_rstr(next, args);
count += temp_count;
temp_count = handling_octal(next, args);
count += temp_count;
temp_count = handling_hex(next, args);
count += temp_count;
return (count);
}

