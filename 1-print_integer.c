#include "holberton.h"
/**
 *print_integer - print
 *@n: receive a number
 *Return: Amount of digits of the number n
 */
int print_integer(int n, int cont)
{
	unsigned int num;

	if (n < 0)
	{
		print_char(45);
		num = (-1) * n;
	}
	else
		num = n;

	if (num / 10)
	{
		cont = print_integer(num / 10, cont = cont + 1);
	}
	print_char((num % 10) + '0');
	return (cont);
}
