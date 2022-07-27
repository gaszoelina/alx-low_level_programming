#include "main.h"
#include <string.h>
/**
 * _strcat -> function to concate the strig
 * @dest: first
 * @src: second para
 * @n: 3rd
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
