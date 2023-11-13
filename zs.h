#ifndef ZS_H
#define ZS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

/* environment variables */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

struct builtin
{
	char *env;
	char *exit;
} builtin;

struct info
{
	int final_exit;
	int ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

char *zs_append_path(char *path, char *cmd);
int builtin_cmd(char **cmd, char *input);
int check_builtin(char **cmd, char *buff);
void zs_env(void);
void execute_cmd(char *cp, char **cmd);
void cmd_exit(char **cmd, char *input);
void freebuff(char **buff);
char *zs_path(void);
int _putchar(char c);
void zs_prompt(void);
int main(int ac, char **av, char *envp[]);
void zs_sigint(int i);
int zs_strcmp(char *str1, char *str2);
int zs_strlen(char *str);
int zs_strncmp(char *str1, char *str2, int c);
char *zs_strdup(char *str);
char *zs_strchr(char *str, char chr);
char *zs_check_path(char **path, char *cmd);
char **zs_strtok(char *input);

#endif
