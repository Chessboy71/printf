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
    long int l = INT_MIN;

    l -= 1024;
    len = _printf("%d", l);
    len2 = printf("%d", l);
    fflush(stdout);
    if (len != len2)
    {
        printf("Lengths differ.\n");
        fflush(stdout);
        return (1);
    }
    return (0);
}
