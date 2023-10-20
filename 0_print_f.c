#include "main.h"

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
			p_char += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == 'c')
				p_char += _putchar((char)va_arg(args, int));
			else if (format[i] == '%')
				p_char += _putchar('%');
			else if (format[i] == 's')
			{
				p_char += print_string(va_arg(args, char *));
			}
			else if (format[i] == 'i' || format[i] == 'd')
				p_char += print_number(va_arg(args, int));
			else
			{
				p_char += _putchar('%');
				p_char += _putchar(format[i]);
			}
		}
	}
	va_end(args);
	return (p_char);
}
