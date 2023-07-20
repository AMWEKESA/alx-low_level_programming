#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
  * print_all - prints arguments of all type
  * @format: a list of all types of arguments passed
  *
  * Return: success
  */
void print_all(const char * const format, ...)
{
	char *s;
	const char *separator;
	int i, len;
	va_list all;

	va_start(all, format);
	separator = "";
	i = 0;
	len = 0;
	while (format[len])
		len++;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%s%d", separator, va_arg(all, int));
				break;
			case 'c':
				printf("%s%c", separator, va_arg(all, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(all, double));
				break;
			case 's':
				s = va_arg(all, char *);
				if (s == NULL)
					printf("nil");
				else
					printf("%s%s", separator, s);
				break;
			default:
				break;
		}
		separator = ", ";
		++i;
	}
	printf("\n");
	va_end(all);
}
