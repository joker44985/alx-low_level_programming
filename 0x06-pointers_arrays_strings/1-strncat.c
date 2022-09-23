#include "holberton.h"

/**
 * _strncat - concatenates two strings with n charcater.
 * @src: text to be appended
 * @dest: text to which src will be appended
 * @n: number of charcters in src to be added to dest
 * Return: returns cocatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	if (n > 0)
	{
		for (j = 0; j < n; j++, i++)
		{
			if (src[j] != '\0')
				dest[i] = src[j];
			else
				break;
		}
		dest[i] = '\0';
	}
	else
		dest[i] = '\0';
	return (dest);
}
