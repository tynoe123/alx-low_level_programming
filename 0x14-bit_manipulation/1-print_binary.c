#include "main.h"

/** 
 * prints the binary representation of a number.
 * not allowed to use arrays 
 * not allowed to use malloc
 *not allowed to use the % or / operators
*/

void print_binary(unsigned long int n)
{

	int a;
       int count = 0;
	unsigned long int current;

	for (a= 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

