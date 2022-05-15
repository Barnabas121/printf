#include "holberton.h"

/**
 *get_format_func - function that selects function
 *@s: *s const char pointer
 *
 *Description: function that selects function
 *section header: Section description
 *Return: returns int
 */

int (*get_format_func(const char *s))(va_list)
{
print_t print[] = {
{"c", print_char},
{"s", print_string},
{"i", print_integer},
{"d", print_integer},
{NULL, NULL}
};

unsigned int i;

for (i = 0; print[i].prt != NULL; i++)
{
if (*(print[i]).prt == *s)
{
break;
}
}
return (print[i].f);
}


/**
 *_printf -  function that prints anything.
 *@format: *format const pointer
 *
 *Description:  function that prints anything.
 *section header: Section description
 *Return: returns void
 */

int _printf(const char *format, ...)
{
va_list argptr;
int (*f)(va_list);
unsigned int x = 0, count = 0;
if (format == NULL)
return (-1);
va_start(argptr, format);
while (format[x])
{
for (; format[x] != '%' && format[x]; x++)
{
_putchar(format[x]);
count++;
}
if (!format[x])
return (count);
f = get_format_func(&format[x + 1]);
if (f != NULL)
{
count += f(argptr);
x += 2;
continue;
}
if (!format[x + 1])
return (-1);
_putchar(format[x]);
count++;
if (format[x + 1] == '%')
x += 2;
else
x++;
}
va_end(argptr);
return (count);
}
