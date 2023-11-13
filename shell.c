#include "zs.h"

/**
* main - main function
* @ac: argument count
* @av: pointer to argument vector
* @envp: pointer to environment vector
* Return: 0
*/

int main(int ac, char **av, char *envp[]);
int main(int ac, char **av, char *envp[])
{
	char *input = NULL;
	char *cmdpath = NULL;
	char *path = NULL;
	char **cmd = NULL;
	char **path2 = NULL;
	size_t buffer_size = 0;
	ssize_t size = 0;

	(void)envp;
	(void)av;

	if (ac < 1)
		return (-1);

	signal(SIGINT, zs_sigint);

	while (1)
	{
		zs_prompt();
		size = getline(&input, &buffer_size, stdin);

		if (size < 0)
			break;

		info.ln_count++;

		if (input[size - 1] == '\n')
		{
			input[size - 1] = '\0';
		}
		cmd = zs_strtok(input);

		if (cmd == NULL || *cmd == NULL || **cmd == '\0')
		{
			continue;
		}

		if (check_builtin(cmd, input))
		{
			continue;
		}

		path = zs_path();
		path2 = zs_strtok(path);
		cmdpath = zs_check_path(path2, cmd[0]);

		if (!cmdpath)
		{
			freebuff(cmd);
			perror(av[0]);
		}
		else
		{
			execute_cmd(cmdpath, cmd);
			free(cmdpath);
		}
		freebuff(cmd);
		cmd = NULL;
		freebuff(path2);
		}

		if (size < 0 && flags.interactive)
		{
			write(2, "\n", 1);
		}

	free(input);
	input = NULL;
	return (0);
}
