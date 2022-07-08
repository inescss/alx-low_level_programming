#include<stdio.h>
/**
 * main - entry point
 *
 * return: always 0
 */
int main(void)
{
long n, i;
n = 612852475143;
for (i = 2; i < n; i++)
{
while (n % i == 0)
n = n / i;
}
Printf("%lu\n", n);
return (0);
}

