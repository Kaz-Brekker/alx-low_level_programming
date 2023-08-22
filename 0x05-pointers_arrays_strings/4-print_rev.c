#include <stdio.h>
#include <string.h>
/**
 * print_rev - uno reverso
 * @s: string*
 * Return: as always
 */
void print_rev(char *s)
{
	int len = 0;
	int o;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (o = leng; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
