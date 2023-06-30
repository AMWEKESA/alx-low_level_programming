#include "main.h"
#include <stddef.h>

/**
 * string_toupper - change lowercase to uppercase
 * @n: pointer
 * Return: success
 */

char *string_toupper(char *str)
{
	char *ptr;
	if (str == NULL)
		return (str);

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - ('a' - 'A');
		ptr++;
	}
	return (str);
}
