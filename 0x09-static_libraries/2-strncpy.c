#include "main.h"
#include <string.h>
/**
 * _strncopy -> for copying purpose
 * @dest: first param
 * @src: second param
 * @n: last parameter
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
