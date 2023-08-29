#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: the to be checked char
 * Return: 1 if char fails 0 ifelse.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
