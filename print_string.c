#include <stdio.h>
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
char *string = va_arg(ap, char *);
int count;
if (string == NULL)
string = "(null)";
count = _puts(string);
return (count);
}
