#include "main.h"
/**
* print helper function
* @t: the number to print
*
* Return: the number of characters printed
*/
int this_is_helper(int t)
{
unsigned int i;
int count = 0;
i = t;
if (t < 0)
{
_putchar('-');
count++;
i = -i;
}
if (i < 10)
{
count += _putchar(i + '0');
return (count);
}
if (i > 9)
{
count += this_is_helper(i / 10) + 1;
_putchar((i % 10) + '0');
return (count);
}
return (0);
}
/**
* print_int - Prints an integer to stdout
* @ap: va_list
*
* Return: The number of characters printed
*/
int printf_si_int(va_list ap)
{
int t = va_arg(ap, int);
int count = 0;
count = this_is_helper(t);
return (count);
}
