#include "main.h"

/**
 * _abs - computes absolute value of a number
 * @n : is the number to be determined.
 *
 * Return: returns abs value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n * 1);
	}
	else if (n == 0)
	{
		return (n * 0);
	}
	else
	{
		return (n * -1);
	}
}
