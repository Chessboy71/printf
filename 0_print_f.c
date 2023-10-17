#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int p_char = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
			{
				char ch = (char)va_arg(args, int);

				p_char += _putchar(ch);
				break;
			}
			case 's':
			{
				char *str = va_arg(args, char *);

				while (*str)
				{
					p_char += _putchar(*str);
					str++;
				}
				break;
			}
			default:
				_putchar('%');
				_putchar(*format);
			}
		}
		else
			_putchar(*format);
		format++;
	}
	va_end(args);
	return (p_char);
}
