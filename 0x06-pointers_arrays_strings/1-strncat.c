#include "main.h"
/**
 * _strncat - appends
 * @dest: destination
 * @src: source
 * @n: number odf chars
 * Return: shit
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
