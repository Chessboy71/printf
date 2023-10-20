#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;

    len = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    fflush(stdout);
    if (len != len2)
    {
        printf("Lengths differ.\n");
        fflush(stdout);
        return (1);
    }
    return (0);
}
