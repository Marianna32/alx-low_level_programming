#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code for ALX students.
 * @a: is a pointer int type
 * @b: is a pointer int type
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
