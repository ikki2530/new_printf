#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
/* printf function */
int _printf(const char *format, ...);

/* print ascii */
int print_char(char c);
<<<<<<< HEAD
int print_string(va_list list);
int print_integer(int n, int count);
=======
int print_string(char *s);
/* print numbers */
int print_integer(int n);
>>>>>>> 0b3c9cf3f41a45067ae1787bfdb94abc98777123
int print_double(long int n);
/* convert list to printeable ascii */
int convert_char(va_list list);
int convert_string(va_list list);
/* convert list to printeable numbers */
int convert_integer(va_list list);
/**
 *struct find - structure to find function related with data type
 *@type: datatype
 *@print: pointer to function
 *
 */
typedef struct find
{
	char *type;
	int (*print)();
} struct_find;

#endif
