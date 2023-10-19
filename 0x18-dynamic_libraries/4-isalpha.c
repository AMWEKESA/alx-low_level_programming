#include "main.h"

/**
* _isalpha - checks for upper or lowercase character
*@c: charunder test
* Return: 1 if lowercase or upper else 0
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
