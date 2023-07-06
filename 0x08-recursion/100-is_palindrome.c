#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks for palindrome properties
 * *s: pontre to string to be ckecked
 * Return: 1 if palindomic else 0
 */
 
int palindrome(const int *s, const int srev);
int is_palindrome(char *s)
{
	if (*s != srev)
	{
		return (0);
	}
	else
		return (palidrome);
}

int is_palindrome(char *s)
{
	int len = strlen(s);
	int i, j;

	for (i = 0; j = len - 1; i < j; ++i; --j);
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
