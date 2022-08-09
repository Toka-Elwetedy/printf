#include "main.h"
/**
* print unsigned integer - print a decimal
* @ap: va_list with number to print
* Return: number of characters printed
*/
int printf_uns_int(va_list ap);
{
int count = 0;
unsigned int mon, sem, i, dig, u, num;
u = va_arg(ap, unsigned int);
if (u != 0)
{
num = u;
mon = 0;
while (num != 0)
{
num /= 10;
mon++;
}
sem = 1;
for (i = 1; i <= mon - 1; i++)
sem *= 10;
for (i = 1; i <= mon; i++)
{
dig = u / sem;
_putchar(dig + '0');
count++;
u -= dig *sem;
sem /= 10;
}
}
else
{
_putchar('0');
return (1);
}
return (count);
}
