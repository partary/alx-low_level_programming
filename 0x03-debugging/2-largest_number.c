#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: 1st integer
 * @b: 2nd number
 * @c: 3rd number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest_number;

	if (a > b && a > c)
	{
		largest_number = a;
	}
	else if (b > c)
	{
		largest_number = b;
	}
	else
	{
		largest_number = c;
	}

	return (largest_number);
}
