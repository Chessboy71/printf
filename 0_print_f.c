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
	int i, p_char = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			i++;
			if (format[i] == 'c')
				_putchar((char)va_arg(args, int));
			else if (format[i] == '%')
				_putchar('%');
			else if (format[i] == 's')
			{
				char *str = va_arg(args, char *);

				if (str == NULL)
				{
					str = "(null)";
				}
				while (*str)
				{
					p_char += _putchar(*str);
					str++;
				}
				p_char--;
			}
		}
		p_char--;
	}
	va_end(args);
	return (p_char);
}
