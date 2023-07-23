#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * *argstostr - concatenates all arguments of a program
  * @ac: argument count
  * @av: pointer to argument vector
  * Return: return pointer to new string, else NULL
  */

char *argstostr(int ac, char **av)
{
	int i;
	int len = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		len += strlen(av[i]) + 1;
	}
	x = malloc(sizeof(char) * (len + 1));
	if (x == NULL)
		return (NULL);
	x[0] = '\0';

	for (i = 0; i < ac; ++i)
	{
		strcat(x, av[i]);
		if (1 < ac -1)
			strcat(x, "\n");
	}

	return (x);
}
