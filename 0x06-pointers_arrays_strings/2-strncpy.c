#include "main.h"

/**
 * _strncpy - a function
 * @dest: the dest
 * @src: the src
 * @n: the n
 * Return: the return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
