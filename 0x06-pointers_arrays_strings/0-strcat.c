#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 * @src: text to be appended
 * @dest: text to which src will be appended
 * Return: returns cocatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
