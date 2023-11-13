#include "zs.h"

/**
* zs_append_path - adds path to command
* @path: command path
* @cmd: usercommand
* Return: buff
*/

char *zs_append_path(char *path, char *cmd)
{
	size_t i = 0;
	size_t j = 0;
	char *buff;

	if (path == 0)
		path = "";

	if (cmd == 0)
		cmd = "";


	buff = malloc(sizeof(char) * (zs_strlen(path) + zs_strlen(cmd) + 2));

	if (!buff)
		return (NULL);

	for (i = 0; path[i]; i++)
	{
		buff[i] = path[i];
	}

	if (path[i - 1] != '/')
	{
		buff[i] = '/';
		i++;
	}

	for (j = 0; cmd[j]; j++)
	{
		buff[i + j] = cmd[j];
	}

	buff[i + j] = '\0';
	return (buff);
}
