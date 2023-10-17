#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int printf_str(va_list ap);
int print_format(char specifier, va_list ap);
int print_str(char *s);
int print_digit(long n, int base);

#endif /* MAIN_H */
