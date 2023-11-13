#include "zs.h"

/**
* zs_strlen - returns the length of a string
* @str: string passed
* Return: len
*/

int zs_strlen(char *str)
{
	int len = 0;

	for (; *str != '\0'; str++)
	{
		len++;
	}

	return (len);
}
