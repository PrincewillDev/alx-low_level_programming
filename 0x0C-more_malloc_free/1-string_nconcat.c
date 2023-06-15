#include "main.h"

/**
 * string_nconcat - concatenate two string
 * @s1: destination pointer
 * @s2: source pointer
 * @n: nth value
 * Return: pointer to malloc
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{	char *ptr;
	unsigned int len1 = 0, len2 = 0, i, j, s;

	i = 0;
	s = 0;

	if (s1 == NULL)
	{s1 = "";
	}
	if (s2 == NULL)
	{s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ptr[s] = s1[i];
		s++;
		i++;
	}
	for (j = 0, s = i; j < n; j++, s++)
	{
		ptr[s] = s2[j];
	}
	ptr[s] = '\0';
	return (ptr);
}
