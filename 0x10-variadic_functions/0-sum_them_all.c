#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * @args - first argument
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
