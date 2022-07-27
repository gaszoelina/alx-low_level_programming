#include "main.h"

/**
 * _memcpy - copy n bytes
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n; /**only positive*/

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}
