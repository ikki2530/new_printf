#include "holberton.h"

int convert_integer(va_list list)
{
	int n = 0, len = 0;

	n = va_arg(list, int);
	len = print_integer(n);
	return (len);
}
