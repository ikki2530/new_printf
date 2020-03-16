#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
/* printf function */
int _printf(const char *format, ...);

/* print ascii */
int print_char(char c);
int print_string(char *s);

/* convert list to print ascii */
int convert_char(va_list list);
int convert_string(va_list list);
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
