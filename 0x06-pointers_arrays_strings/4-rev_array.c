#include "holberton.h"

/**
 * reverse_array - reverses contents of an array
 * @a: array
 * @n: size of the array
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int half_of_array = n / 2, j = 0, temp;

	for ( ; j < half_of_array; j++)
	{
		temp = a[n - j - 1];
		a[n - j - 1] = a[j];
		a[j] = temp;
	}
}
