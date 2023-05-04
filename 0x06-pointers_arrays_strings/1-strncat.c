#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination
 * @src: source
 * @n: number of bytes used of str to concatenate
 *
 * Return: a pointer to the result dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, k;

	j = 0;
	k = 0;

	while (dest[j] != '\0')
		j++;

	while (src[k] != '\0' && k < n)
	{
		dest[j] = src[k];
		j++;
		k++;
	}

	dest[j] = '\0';

	return (dest);
}
