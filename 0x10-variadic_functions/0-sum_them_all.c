#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Prints the sum of all it's numbers
 * @n: The number of paramters that are passed  to a function
 * @...: A variable number of parameters.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
