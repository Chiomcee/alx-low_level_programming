#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mynumbers;
	unsigned int i, sum = 0;

	va_start(mynumbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(mynumbers, int);

	va_end(mynumbers);

	return (sum);
}
