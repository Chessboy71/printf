#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c': {
					char ch = (char)va_arg(args, char);

					putchar(ch);
				} break;
				case 's': {
					char *str = va_arg(args, char *);

					while (*str)
					{
						putchar(*str);
						str++;
					}
				} break;
				default;
					putchar('%');
					putchar(*format);
			}
			else
			{
				putchar(*format);
			}
			format++;
		}
	va_end(arg_list);
}
