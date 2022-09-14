#include "main.h"

/**
 * print_last_digit - determines last value of a number
 * @n : is the number to be determined.
 *
 * Return: returns last value of a number
 */
int print_last_digit(long int n)
{
	int last_digit;

	if (n < 0)
		n *= -1;

	last_digit = (n % 10);
	_putchar(last_digit + '0');

	return (last_digit);
}
