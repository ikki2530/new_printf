#include <stdarg.h>
#ifndef HOLBERTON_H
#define HOLBERTON_H

int print_char(char c);
int print_string(va_list list);
int print_integer(int n);
typedef struct newdatatype
{
        char *dt;
        int (*func)();
} datat;


#endif
