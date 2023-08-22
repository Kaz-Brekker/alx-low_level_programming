#include <stdio.h>
/**
 * print_rev - uno reverso
 * @s: string*
 * Return: as always
 */
void print_rev(char *s)
{
	int long = 0;
	int o;

	while (*s != '\0')
	{
		long++;
		s++;
	}
	s--;
	for (o = long; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
