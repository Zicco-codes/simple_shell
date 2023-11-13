#include "zs.h"

/**
 * execute_cmd - executes user commands
 *@cp: command
 *@cmd: pointers to commands
 */

void execute_cmd(char *cp, char **cmd)
{
	pid_t child_pid;

	int stat;
	char **env = environ;

	child_pid = fork();

	if (child_pid < 0)
		perror(cp);

	if (child_pid == 0)
	{
		execve(cp, cmd, env);
		perror(cp);
		free(cp);
		freebuff(cmd);
		exit(98);
	}
	else
		wait(&stat);
}
