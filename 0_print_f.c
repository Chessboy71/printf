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

				p_char += _putchar(&c);
				break;
			}
			case 's':
			{
				char *str = va_arg(arg_list, char *);

				if (str != NULL)
					_puts(str);
				else
					p_char += _puts("(NULL)");
				break;
			}
			case '%':
			{
				p_char += _putchar("%");
				break;
			}
		}
		else
		{
			p_char += _putchar(format);
			format++;
		}
	}
	va_end(arg_list);
	return (p_char);
}
}