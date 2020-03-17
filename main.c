#include "holberton.h"
#include <stdio.h>
int main(void)
{
	char c = '\n';

	char p = '\0';
	char *s = "";

	int len;
	int len2;

	len2 = printf("%c %c", p, c);
	len = _printf("%c %c", p, c);
	printf("Length:[%i]\n", len2);
	_printf("Length:[%i]\n", len);
	return (0);

}
