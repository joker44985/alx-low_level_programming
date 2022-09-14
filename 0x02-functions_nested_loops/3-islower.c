#include "main.h"

/**
 * _islower - checks whether character is lowercase
 * @c: is the argument to hold the character to be tested.
 *
 * Return: 1 if the number is lowercase
 * Otherwise function returns 0 if character is not lowercase.
 */

int _islower(int c)
{
        if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
