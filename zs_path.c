#include "zs.h"

/**
* zs_path - finds the global enviroment path
* Return: NULL
*/

char *zs_path(void)
{
	char **env = environ;
	char *path = NULL;
	int i = 0;

	while (*env)
	{
		if (zs_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && i < 5)
			{
				path++;
				i++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}
