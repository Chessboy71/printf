#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int n);
int print_string(char *str);

#endif /* MAIN_H */
