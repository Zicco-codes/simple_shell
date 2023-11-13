#include "zs.h"

/**
* zs_strdup - dupicates string
* @str: string
* Return: ptr
*/

char *zs_strdup(char *str)
{
	int i;
	int length;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = zs_strlen(str);

	ptr = malloc(sizeof(char) * (length + 1));

	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}

	ptr[length] = '\0';
	return (ptr);
}
