#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 * @str: string to encoded
 * Return: returnms encoded string
 */
char *leet(char *str)
{
	char lower[6] = "aeotl";
	char upper[6] = "AEOTL";
	char ref[6] = "43071";
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		for (j = 0 ; j < 6; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = ref[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
