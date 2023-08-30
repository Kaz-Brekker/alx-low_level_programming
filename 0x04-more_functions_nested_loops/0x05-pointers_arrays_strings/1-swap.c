#include <stdio.h>
/**
 * swap_int - self explanatory
 *
 * @a: one to change
 * @b: other to change
 * no return
 */
void swap_int(int *a, int *b)
{
	int o;

	o = *a;
	*a = *b;
	*b = o;
}
