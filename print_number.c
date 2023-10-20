#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
int print_number(int n)
{
	int count = 0;
	if (n == 0)
	{
		count += _putchar('0');
	}
	else if (n == INT_MIN)
	{
		count += _putchar('-');
		count += print_number(INT_MAX);
	}
	else if (n < 0)
	{
		count += _putchar('-');
		count += print_number(-n);
	}
	else
	{
		if (n / 10 != 0)
		{
			count += print_number(n / 10);
		}
		count += _putchar(((unsigned int)n % 10) + '0');
	}
	return (count);
}
