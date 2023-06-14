#include "main.h"
/**
 * str_concat - This function concatenate two strings
 * @s1: destination argument
 * @s2: source argument
 * Return: pointer to malloc.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int count1 = 0, count2 = 0;
	int i, j, s;
	char *str;

	s = 0;
	i = 0;
	j = 0;

	if (s1 == NULL)
	{s1 = "";
	}
	if (s2 == NULL)
	{s2 = "";
	}
	while (s1[count1] != '\0')
	{
		count1++;
	}
	while (s2[count2] != '\0')
	{
		count2++;
	}
	str = malloc((count1 + count2 + 1) * sizeof(char));
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
