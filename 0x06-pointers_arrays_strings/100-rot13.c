#include "holberton.h"

/**
 * rot13 - encodes a string to rot13
 * @str: string to be encoded
 * Return: returns encoded string
 */
char *rot13(char *str)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
