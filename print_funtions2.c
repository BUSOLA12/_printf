#include "main.h"
#include <unistd.h>
#include <stdlib.h>


/**
* print_binary - a function that prints a binary
* representation of an integer to stdout
* @binary: the binary representation of an integer
*
* Return: the number of characters printed
*/
int print_binary(char *binary)
{
int count = 0;

count = write(1, binary, _strlen(binary));
return (count);
}



/**
* print_uint - a function that prints an unsigned integer to stdout
* @x: the unsigned integer to be printed
*
* Return: the number of characters printed
*/
int print_uint(unsigned int x)
{
char c;
int count = 0;

if (x >= 10)
{
count += print_uint(x / 10);
}
c = '0' + x % 10;
write(1, &c, 1);
count++;
return (count);
}
