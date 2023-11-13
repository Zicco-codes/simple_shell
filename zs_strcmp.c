#include "zs.h"

/**
* zs_strcmp - compares two strings
* @str1: compared to s2;
* @str2: compared to s1;
* Return: str1 - str2
*/

int zs_strcmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
	{
		i++;
	}

	return (str1[i] - str2[i]);
}
