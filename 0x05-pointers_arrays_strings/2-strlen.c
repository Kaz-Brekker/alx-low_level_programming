#include <string.h>
/**
 * _strlen - stringg length*
 * @s: string*
 * Return: ()
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
