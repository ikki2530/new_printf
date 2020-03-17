#include "holberton.h"
/**
 *convert_integer - store list arguments into a int variable
 *@list: arguments
 *Return: lenght of the integer
 */
int convert_integer(va_list list)
{
	int n = 0, len = 0;

	n = va_arg(list, int);
	len = print_integer(n);
	return (len);
}
