#include "main.h"

/**
 * factorial_helper - Helper function to calculate factorial recursively.
 * @n: Number to return the factorial from.
 *
 * Return: Factorial of n.
 */
int factorial_helper(int n, int result)
{
	if (n < 0)
		return (-1); // Factorial is undefined for negative numbers
	if (n == 0)
		return (result); // Return the accumulated result

	return factorial_helper(n - 1, n * result); // Recursive calculation
}

/**
 * factorial - Returns the factorial of a number.
 * @n: Number to return the factorial from.
 *
 * Return: Factorial of n.
 */
int factorial(int n)
{
	return factorial_helper(n, 1); // Call the helper function with an initial result of 1
}

