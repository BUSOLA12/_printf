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
int i;
for (i = 0; binary[i] != '\0'; i++)
{
_putchar(binary[i]);
count++;
}
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

_putchar(c);

count++;

return (count);
}

/**
 * print_octal - a function that prints an octal notation string
 * @octal: the octal notation string to be printed
 *
 * Return: the number of characters printed
 */
int print_octal(char *octal)
{
    int i, len;

    len = _strlen(octal);

    for (i = 0; i < len; i++)
    {
        _putchar(octal[i]);
    }

    return (len);
}

