#include "main.h"
/**
* print_string - Prints a string to stdout
*
* @ap: The argument pointer
*
* Return: The number of characters printed
*/
int printf_string(va_list ap)
{
char *t = va_arg(ap, char *);
int e, ret = 0;
if (t == NULL)
t = "(null)";
for (e = 0; t[e] != '\0'; e++)
{
_putchar(t[e]);
ret++;
}
return (ret);
}
