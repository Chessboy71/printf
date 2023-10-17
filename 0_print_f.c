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
<<<<<<< HEAD
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
=======
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
>>>>>>> 12530e3b0d4613d4ad1bf9f42147fab58c649b9b
			}
			else
			{
<<<<<<< HEAD
				putchar(*format);
=======
				p_char += _putchar("%");
				break;
>>>>>>> 12530e3b0d4613d4ad1bf9f42147fab58c649b9b
			}
			format++;
		}
<<<<<<< HEAD

		va_end(args);
=======
		else
		{
			p_char += _putchar(format);
			format++;
		}
	}
	va_end(arg_list);
	return (p_char);
>>>>>>> 12530e3b0d4613d4ad1bf9f42147fab58c649b9b
}
}