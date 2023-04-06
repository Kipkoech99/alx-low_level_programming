#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int num;
	unsigned long int joined = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = joined >> i;
		if (num & 1)
			count++;
	}

	return (count);
}
