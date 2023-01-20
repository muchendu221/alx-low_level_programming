#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

/**
 * struct format_t - entry to types
 *
 *@t: type of variable
 *@f: function to print type of variable
 */
typedef struct format_t
{
	char *t;
	void (*f)(va_list);
} format_t;
#endif
