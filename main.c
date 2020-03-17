#include "holberton.h"
#include <stdio.h>
int main(void)
{
	char c = '\n';

	int p = 910;
	char *s = "";

	int len;
	int len2;

	len2 = printf("%i %c", p, c);
	len = _printf("%i %c", p, c);
	printf("Length:[%i]\n", len2);
	_printf("Length:[%i]\n", len);
	return (0);

}
