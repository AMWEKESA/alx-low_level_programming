#include "main.h"
#include <string.h>

/**
 * check_palindrome - checks for palindrome properties
 *
 * @i: left index
 * @s: pointer to string to be checked
 * @j: Right index* Return: 1 if palindrome, else 0
 *
 * Return: 1 if palindrome, else 0
 */
int check_palindrome(char *s, int i, int j);

/**
 * is_palindrome - checks for palindrome properties recusively
 *
 * @s: pontre to string to be ckecked
 *
 * Return: 1 if palindomic else 0
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - checks for palindrome properties
 *
 * @s: string to be checked
 * @i: left index
 * @j: right index
 * Return: 1 if palindrome, else 0
 */
int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	else if (s[i] == s[j])
		return (check_palindrome(s, i + 1, j - 1));
	else
		return (0);
	}
