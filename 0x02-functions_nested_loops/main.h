#ifndef MAIN_H
#define MAIN_H

void print_times_table(int n);
/**
 * jack_buar - gets last value of a given number
 * @void : first number
 *
 * Return: returns all natural numbers
 */
void jack_bauer(void);

/**
 * print_to_98 - gets last value of a given number
 * @n : first number
 *
 * Return: returns all natural numbers
 */
void print_to_98(int n);

/**
 * times_table - gets last value of a given number
 * @a : first number.
 * @b : second number
 *
 * Return: returns sum of a and b
 */
int add(int a, int b);

/**
 * times_table - gets last value of a given number
 * @void : number to be determined.
 *
 * Return: returns last value
 */
void times_table(void);
/**
 * print_last_digit - gets last value of a given number
 * @n : number to be determined.
 *
 * Return: returns last value
 */
int print_last_digit(long int n);

/**
 * _abs - computes the absolute value of a given number
 * @n : number with sign to be determined.
 *
 * Return: returns abs value
 */
int _abs(int n);

/**
 * print_sign - determines the sign of a number
 * @n : number with sign to be determined.
 *
 * Return: returns; 1 if number is positive; 0 if number is zero; -1 if number is negative
 */
int print_sign(int n);

/**
 * _islower - determines if a character is lowercase or not
 * @c: takes a single charcater
 *
 * Return: Returns 1 if character is lower case.
 * Otherwise the function returns 0.
 */
int _islower(int c);

/**
 * _isalpha - determines if a charcater is part of the alphabet.
 * @c: takes a single charcater
 *
 * Return: Returns 1 if character is part of alphabet.
 * Otherwise the function returns 0.
 */
int _isalpha(int c);

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 * @void: takes nothing
 *
 * Return: Returns nothing.
 */
void print_alphabet_x10(void);

/**
 * print_alphabet - prints the alphabet
 * @void: takes nothing
 *
 * Return: Returns 0 Success
 */
void print_alphabet(void);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

#endif
