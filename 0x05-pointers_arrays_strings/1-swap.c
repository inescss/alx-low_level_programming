#include "main.h"
/**
 * swap_int -> given two integers swaps the values they are holding
 * @a: parameter 1
 * @b: parameter 2
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
