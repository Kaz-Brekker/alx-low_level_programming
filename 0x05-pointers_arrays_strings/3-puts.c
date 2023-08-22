#include <stdio.h>
/**
 * _puts - just a string
 * @str: string
 *
 */
int _putchar(char c)
{
	return fwrite(&c, 1,  1, stdout);
}
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);

	}

		putchar('\n');
}
