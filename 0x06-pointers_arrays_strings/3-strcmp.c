#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: original string
 * Return: integer value greater, less than or equal to zero.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((int)(char)(s1[i]) - (int)(char)(s2[i]));
}
