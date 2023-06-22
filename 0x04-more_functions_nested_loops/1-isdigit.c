#include "main.h"

/**
  *_isdigit - checks for digit frm 0 thr'9
  *
  *@x: whta is to be checked
  *
  *Return: 1 when + otherwise 0
  */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
