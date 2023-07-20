#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  *
  * @n: number of arguments passed
  * @separator: pointer to string to be printed btn numbers
  *
  * Return: success
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int x;

	va_start(num, n);

	for (i = 0; i < n; ++i)
	{
		x = va_arg(num, int);
		printf("%d", x);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(num);
}
