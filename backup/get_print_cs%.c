#include "holberton.h"
#include <stdarg.h>

/**
 *print_char - print char
 *
 * @a: va_list a
 * Return: int
 */

int print_char(va_list a)
{
char chars = (char)va_arg(a, int);
_putchar(chars);
return (1);
}

/**
 *print_string - print strings
 *
 * @b: va_list b
 * Return: int
 */

int print_string(va_list b)
{
int i;
char *S = va_arg(b, char *);

if (S == NULL)
S = "(null)";

for (i = 0; S[i] != '\0'; i++)
{
_putchar(S[i]);
}
return (i);
}

/**
 *r_len - length
 *
 * @n: int n
 * Return: int
 */
int r_len(int n)
{
int i, len;
if (n == 0)
return (0);
i = n % 10;
len = 1 + r_len(n / 10);
_putchar(i + '0');
return (len);
}
/**
 *print_integer - print integer
 *
 * @v: va_list v
 * Return: int
 */

int print_integer(va_list v)
{
int count = 0;
int x = va_arg(v, char *);

if (x < 0)
{
_putchar('-');
x = -x;
}
if (x / 10)
{
count = r_len(x);
}
_putchar(count % 10);
return (count);
}
