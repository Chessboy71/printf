#include "main.h"
#include <stdarg.h>

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	int p_char = 0;
	va_list arg_list;

	va_start(arg_list, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
		format++;
		switch (*format)
		{
			case 'c':
			{
				char c = va_arg(arg_list, int);

				write(1, &c, 1)
				p_char++;
				break;
			}
			case 's':
			{
				char *str = va_arg(arg_list, char *);

				if (str != NULL)
				{
					while (*str != '\0')
					{
						write(1, str, 1)
						str++;
						p_char++;
					}
				}
				else
				{
					write(1, "(NULL)", 6);
					p_char += 6;
				}
				break;
			}
			case '%':
			{
				write(1, %, 1)
				p_char++;
				break;
				}
			}
		}
		else
		{
			write(1, format, 1)
			p_char++;
		}
		format++;
	}
	va_end(arg_list);
	return (p_char);
}
