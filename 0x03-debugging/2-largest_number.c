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
int largest;
if (a > b && a > c)
{

	largest = a;
}
else if (b > c && b > a)
{
	largest = b;
}
else if (c > b)
{
	largest = c;
}
else
{
	largest = b;
}
return (largest);
}
