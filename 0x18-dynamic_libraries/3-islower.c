#include "main.h"

/**
* _islower - checks for lowercase character
* @c: character being checked
* Return: 1 if lowercase else 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
