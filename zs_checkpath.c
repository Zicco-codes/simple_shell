#include "zs.h"

/**
* zs_check_path - checks whether path is valid
* @path: tokenized path
* @cmd: user command
* Return: NULL
*/

char *zs_check_path(char **path, char *cmd)
{
	int i = 0;
	char *result = NULL;

	while (path[i])
	{
		result = zs_append_path(path[i], cmd);

		if (access(result, F_OK | X_OK) == 0)
			return (result);

		free(result);
		i++;
	}
	return (NULL);
}
