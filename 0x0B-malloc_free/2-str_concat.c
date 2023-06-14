#include "main.h"

/**
 * str_concat - This function concatenate two strings
 * @s1: destination argument
 * @s2: source argument
 * Return: pointer to malloc.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len = 0;
	int i, j, s;
	char *str;

	s = 0;
	i = 0;
	j = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[len] != '\0' && s2[len] != '\0')
	{
		len++;
	}

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{	str[s] = s1[i];
		i++;
		s++;
	}

	while (s2[j] != '\0')
	{
		str[s] = s2[j];
		j++;
		s++;
	}
	str[s] = '\0';
	return (str);
}
