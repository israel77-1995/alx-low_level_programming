#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)

	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}

