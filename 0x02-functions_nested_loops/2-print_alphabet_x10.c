#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 * @void: takes nothing
 *
 * Return: returns no arguments
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;
	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
