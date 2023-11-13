#include "zs.h"

/**
* zs_strncmp - compares two strings bytes
* @str1: first string
* @str2: second string
* @c: bytes count
* Return: str1[i] - str2[i]
*/

int zs_strncmp(char *str1, char *str2, int c)
{
	int i;

	for (i = 0; str1[i] && str2[i] && i < c; i++)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}

	if (i == c)
		return (0);

	return (str1[i] - str2[i]);
}
