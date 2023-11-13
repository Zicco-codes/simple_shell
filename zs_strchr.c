#include "zs.h"

/**
* zs_strchr - locates a character in a string
* @str: string
* @chr: character
* Return: NULL
*/

char *zs_strchr(char *str, char chr)
{
	while (*str)
	{
		if (*str == chr)
			return (str);
		str++;
	}
	if (!chr)
	{
		return (str);
	}
	return (NULL);
}
