#include <stdarg.h>
#include "main.h"
/**
 * sum_them_all - Sum all its parameters.
 * @n: The number of parameters to sum.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	if (n == 0)
		return (0);
	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
