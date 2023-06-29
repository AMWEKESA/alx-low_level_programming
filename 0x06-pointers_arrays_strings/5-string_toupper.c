#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @n: pointer
 * Return: success
 */

char string_toupper(char *)
{
	if (str == NULL)
		return;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str - 32;
		str++;
	}
}

