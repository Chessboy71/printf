#include "main.h"

/**
 * print_string - Prints an integer
 * @n: The integer to be printed
 */
int print_string(char *str)
{
    int count = 0;

    if (str == NULL)
        str = "(null)";
    while (*str)
    {
        count += _putchar(*str);
        str++;
    }
    return (count);
}
