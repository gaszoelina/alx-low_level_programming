#include "main.h"

/**
 * largest_number - returns the largest 3
 * @a: numb1
 * @b: numb2
 * @c: numb3
 * Return: largest
 */
int largest_number(int a, int b, int c)
{
	if (a > b)
	{
	if (a > c)
	{
	largest = a;
	}
	else
	{
	largest = c;
	}
	}
	else if (b > c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}
	return (largest);
}
