#include "main.h"

/**
 * factorial - returns te factorial of a given number.
 * @n: input number.
 * Return: factorial of te number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
