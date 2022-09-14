#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints 00:00 to 23:59
 * @void : takes nothing
 *
 * Return: returns nothing
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
				putchar('0');
			if (m < 10)
				printf("%d:0%d\n", h, m);
			else
				printf("%d:%d\n", h, m);
		}
	}
}
