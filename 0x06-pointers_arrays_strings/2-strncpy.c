#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: final text to be returned
 * @src: text to be appended
 * @n: number of charcaters to be appended
 * Return: returns copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
