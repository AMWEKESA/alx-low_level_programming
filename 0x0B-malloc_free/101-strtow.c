#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * free_word - free word
  * @words: pointer to words
  * Return: void
  */

void free_words(char **words)
{
	int i;

	if (words == NULL)
		return;
	for (; words[i] != NULL; ++i)
		free(words[i]);
	free(words);
}


/**
  * **strtow -  splits a string into words
  * @str: string to be split
  *
  * Return: return pointer to array of strings, else NULL
  */

char **strtow(char *str)
{
	char **x;
	int i, j = 0, len = 0, word = 0, c = 0, begin = 0;

	while (str[len])
		len++;
	for (i = 0; i < len; ++i)
	{
		if (str[i] == ' ' || str[i] == '\n')
		{
			if (c)
			{
				word++;
				c = 0;
			}
		} else if (c++ == 0)
			begin = i;
	}
	if (word == 0)
		return (NULL);
	x = (char **)malloc(sizeof(char *) * (word + 1));
	if (x == NULL)
		return (NULL);
	for (i = 0; i < len; ++i)
	{
		if (str[i] == ' ' || str[i] == '\n')
		{
			if (c)
			{
				x[j] = (char *) malloc(sizeof(char) * (c + 1));
			if (x[j] == NULL)
			{
			for (; j < word; j++)
				free(x[j]);
			free(x);
			return (NULL);
			}
			strncpy(x[j], &str[begin], c);
			x[j][c] = '\0';
			j++;
			c = 0;
			}
		} else if (c++ == 0)
			begin = i;
	} x[j] = NULL;
	return (x);
}
