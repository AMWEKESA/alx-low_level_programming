#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints  min number of coins
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: return success
 *
 */
int main(int argc, char *argv[])
{
	int coins, cents;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	while (cents > 0)
	{
		coins++;
		if (cents - 25 >= 0)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
			cents -= 1;
	}
	printf("%d\n", coins);
	return (0);
}
