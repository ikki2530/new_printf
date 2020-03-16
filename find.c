#include "holberton.h"

int find(const char *data, va_list list)
{
	int i = 0;
	int len = 0;
        struct_find finder[] = {
                {"c", convert_char},
                {"s", convert_string}
        };

	for (i = 0; i < 2; i++)
		if (finder[i].type[0] == data[0])
			len = finder[i].print(list);
	return (len);
}
