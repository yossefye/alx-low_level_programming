#include "main.h"

/**
 * string_toupper - a function that changes letters to upper case
 * @s: string
 * Return: shit
 */

char *string_toupper(char *s)
{
	int i = 0;

	if (!s)
		return (s);
	while (s[i] != '\0')
	{
		if (s[i] <= 'a' || s[i] >= 'z')
		{
			i++;
			continue;
		}
		s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
