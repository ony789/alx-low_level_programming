#include <stdio.h>

/**
 * main - entry point
 * description: computes The sum
 * of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return : Always 0 (excluded)
 */
int main( )
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
	{
		z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
