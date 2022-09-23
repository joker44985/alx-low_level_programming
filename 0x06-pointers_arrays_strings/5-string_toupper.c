#include "holberton.h"

/**
 * string_toupper - converts lower case characters to upper case
 * @str: characters to be converted
 * Return: capitalized string
 */
char *string_toupper(char *str)
{
	const int upper_lower_diff = 32;
	int temp, i = 0;

	while (str[i] != '\0')
	{
		if ((int)(char)(str[i]) > 90)
		{
			temp = (int)(char)(str[i]) - upper_lower_diff;
			str[i] = (char)(temp);
		}
		i++;
	}
	return (str);
}
