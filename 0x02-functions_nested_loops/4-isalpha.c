#include "main.h"

/**
 * _isalpha - determines whether a chracter is part of the alphabet
 * @c: this is the character to be tested.
 *
 * Return: returns 1 if character is part of the alphabet.
 * Otherwise it returns 0.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
        return (0);
}
