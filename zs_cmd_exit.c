#include "zs.h"

/**
* cmd_exit - handles exit command
* @cmd: tokenized command
* @input: user input
*/

void cmd_exit(char **cmd, char *input)
{
	free(input);
	freebuff(cmd);
	exit(0);
}
