#include "zs.h"

/**
 *check_builtin- checks if command a built in command
 *@cmd: tokenized input
 *@buff: buffer from getline function
 *Return: 0
 */

int check_builtin(char **cmd, char *buff)
{
	switch (builtin_cmd(cmd, buff))
	{
		case 1:
			return (1);
		default:
			if (**cmd == '/')
			{
				execute_cmd(cmd[0], cmd);
				return (1);
			}
	}
	return (0);
}
