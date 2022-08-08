#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
* Typedef structure: estructura
* @tipo: type of data
* @fun: function of the data type
*/
typedef struct estructura
{
char *tipo;
int (*fun)(va_list);
} estructura;
int _printf(const char *format, ...);
int printf_uns_int(va_list ap);
int printf_si_int(va_list ap);
int printf_char(va_list ap);
int printf_string(va_list ap);
int printf_percent(va_list ap);
#endif
