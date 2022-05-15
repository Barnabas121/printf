#ifndef _PRINTF_FUNCTION
#define _PRINTF_FUNCTION
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * struct print - c, s, i, d.
 * @prt: *ptr point
 * @f: pointer to va_list
 *
 * Description: va_list struct
 */
typedef struct print
{
char *prt;
int (*f)(va_list);
} print_t;

int _putchar(char c);
int print_char(va_list a);
int print_string(va_list b);
int print_integer(va_list v);

int _printf(const char *format, ...);


#endif
