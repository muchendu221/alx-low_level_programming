#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list);
void print_i(va_list);
void print_f(va_list);
void print_s(va_list);

/**
 * struct format_t - entry to types
 *
 *@t: type of variable
 *@f: function to print type of variable
 */
typedef struct print_t
{
	char *t;
	void (*f)(va_list);
} print_t;
#endif
