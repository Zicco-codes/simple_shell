#include "zs.h"

/**
* zs_env - prints the environmental variable
* Return: 0
*/

void zs_env(void)
{
	char **env = environ;
	int i = 0;

	for (i = 0; env[i] != NULL; i++)
	{
		write(1, env[i], zs_strlen(env[i]));
		write(1, "\n", 1);
	}
}
