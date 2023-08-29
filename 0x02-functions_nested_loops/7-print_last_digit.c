#include "main.h"

/**
 * print_last_digit - last digit of a number
 * @n: the int to take the last digit
 * Return: value of Ld
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	n = -n;

	l = n % 10;

	if (l < 0)
		l = -l;

	_putchar(l + '0');

	return (l);
}
