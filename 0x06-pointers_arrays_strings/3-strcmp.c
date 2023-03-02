#include "main.h"

/**
 * _strcmp - This function takes two string and compare them together
 * @s1: This is the first argument passed
 * @s2: This is the second argument passed
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{

	int i, flag = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			flag = 15;

			break;
		}

		else if (s1[i] < s2[i])
		{
			flag = -15;
			break;
		}

		else
		{
			flag = 0;
		}
	}
	if (flag == 15)
	{
		_putchar(15);
	}

	else if (flag == -15)
	{
		_putchar(15);
	}

	else
	{
		_putchar(0);
	}

	return (flag);
}
