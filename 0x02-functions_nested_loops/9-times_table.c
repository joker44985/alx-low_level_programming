#include "main.h"

/**
 * printNum - prints a number with _putchar
 *
 * @n: number to be printed
 * Return: nothing
 */
void printNum(int n)
{
	if (n > 9)
	{
		printNum(n / 10);
		n = n % 10;
	}
	_putchar(n + '0');
}

/**
 * times_table - computes absolute value of a number
 * @void : is the number to be determined.
 *
 * Return: returns abs value
 */

void times_table(void)
{
	int i = 0, j = 0, product, future_product;

	while (i <= 9)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			future_product = i * (j + 1);

			if (j < 9)
			{
				printNum(product);
				_putchar(',');

				if (future_product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}

			if (j == 9)
				printNum(product);
		}

		_putchar('\n');
		i++;
	}
}
