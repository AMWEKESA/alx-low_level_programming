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
	char *str;
	const char *sp;
	int i;
	va_list all;

	va_start(all, format);
	sp = "";
	i = 0;
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sp, va_arg(all, int));
					break;
				case 'c':
					printf("%s%c", sp, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(all, double));
					break;
				case 's':
					str = va_arg(all, char *);
					if (str == NULL)
						printf("nil");
					else
						printf("%s%s", sp, str);
					break;
				default:
					++i;
					continue;
			}
			sp = ", ";
			++i;
		}
	}
		printf("\n");
		va_end(all);
}
