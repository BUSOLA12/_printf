#ifndef MAIN_H
#define MAIN_H


#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
int _printf(const char *format, ...);




/*handling functions*/
int handling_int(char next, va_list args);
int handling_string(char next, va_list args);
int handling_others(char next);
int handling_bicon(char next, va_list args);
int handling_uint(char next, va_list args);
int handling_rstr(char next, va_list args);
int handle_format_specifiers(char next, va_list args);
int handling_octal(char next, va_list args);
int handling_hex(char next, va_list args);
int handling_hex_upper(char next, va_list args);


/*print functions*/
void _putchar(char c);
void print_string(const char *str);
void print_int(int n);
int print_binary(char *binary);
int print_uint(unsigned int x);
int print_reverse(char *str);
int print_octal(char *octal);
int print_hex(char *hex);
int print_hex_upper(char *hex);




/*str functions*/
size_t _strlen(const char *str);
char *_strchr(const char *s, int c);
int count_int_chars(int num);
char *int_to_binary(unsigned int n);
char *uint_to_octal(unsigned int n);
char *uint_to_hex(unsigned int n);
char *uint_to_hex_upper(unsigned int n);
int _strcmp(const char *s1, const char *s2);

#endif
