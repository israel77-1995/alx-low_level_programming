#include "main.h"

/**
 * power - Helper function to calculate power recursively.
 * @x: Base value.
 * @y: Exponent.
 *
 * Return: Result of x^y.
 */
int power(int x, int y)
{
    if (y == 0)
        return 1; // x^0 is always 1
    else
        return x * power(x, y - 1);
}

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: Base value.
 * @y: Exponent.
 *
 * Return: Result of x^y.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return -1; // Error for negative exponents
    else
        return power(x, y);
}

