#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - computes absolute value of a number
 * @n : is the number to be determined.
 *
 * Return: returns abs value
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
