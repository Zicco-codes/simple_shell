#include "zs.h"

/**
* str_print - prints a string
* @str: string
*
* Return: number of characters printed
*/

int str_print(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
