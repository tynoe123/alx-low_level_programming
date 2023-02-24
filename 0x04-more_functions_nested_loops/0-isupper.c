#include "main.h"

/**
 * _isupper - checks for uppercase character
 *  @c: input that is going to be checked
 * Return: 1 if @c is uppercase, otherwise 0
**/

int _isupper(int x)
{
	if(x>=65 && x<=90)
	{
		return (1);
	}
	return (0);
}
