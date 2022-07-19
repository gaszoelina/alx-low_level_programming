#include "main.h"
#include <string.h>
/**
 * _strcat -> this is a function
 * @dest: first para
 * @src: second para
 * Return: a strin
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	while (dest[len])
		len++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
