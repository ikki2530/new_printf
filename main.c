#include "holberton.h"
#include <stdio.h>
int main(void)
{
	char c = '\n';
	int p = 0x12;

	int len;
	int len2;

	len2 = printf("printf normal con i = %i %c", p, c);
	len2 = printf("printf normal co d  = %d %c", p, c);
	len = _printf("printf nuestro con i = %i %c", p, c);
	len = _printf("printf nuestro con d = %d %c", p, c);
	printf("Length:[%i]\n", len2);
	printf("Length:[%i]\n", len);
	return (0);

}
