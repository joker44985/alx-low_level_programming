#include "main.h"

/**
 * print_sign - determines sign of a number
 * @n : is the number to be determined.
 *
 * Return: returns either poisitive, negative, 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
