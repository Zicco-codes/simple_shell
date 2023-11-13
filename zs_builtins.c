#include "zs.h"

/**
* builtin_cmd - handles execution of builtin commands
* @cmd: tokenized commands
* @input: user input
* Return: 0
*/

int builtin_cmd(char **cmd, char *input)
{
	struct builtin builtin = {"env", "exit"};

	switch (zs_strcmp(*cmd, builtin.env))
	{
		case 0:
			zs_env();
			return (1);
		case 1:
			break;
	}

	switch (zs_strcmp(*cmd, builtin.exit))
	{
		case 0:
			cmd_exit(cmd, input);
			return (1);
		case 1:
			break;
	}

	return (0);
}
