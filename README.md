# README.md _printf()


_printf() - The function _printf writes output to standard output. An argument is
received from format that is a character string which outputs based on
the arguments it receives after format. All of the following arguments
should address a conversion specifier, addressed with the prefix %.


int _putchar(char c);


int print_char(va_list a);


int print_string(va_list b);


int print_integer(va_list v);


Return Value
The return value for _printf() is the length of the output recieved
from.


Conversion Specifiers
These are indicated by the characters following the % which will indicate
the kind of conversion that is taking place. Actions and descriptions follows:


d, i
Both d & i correspond to and int argument.


s
The const char * specifier converts the argument to a character string.


c
This is an int specifier that converts argument(s) to an unsigned
char to be printed alone.


Files Included:


_printf.c - The function _printf writes output to standard output.


_putchar.c - Writes the character c to stdout.


get_print_cs%.c - Various functions associated with va_list.


holberton.h - Header file that also contains our struct