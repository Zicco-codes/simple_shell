#ifndef ZS_MAIN_H
#define ZS_MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
#include <errno.h>
#include <sys/wait.h>

typedef struct liststr
{
char *name;
char *value;
struct liststr *next;
} list_t;

extern char **environ;
#define MAX_COMMAND_LENGTH 100

int zs_strcmp(const char *s1, const char *s2);
void zs_prompt();
const char *zs_needhay(const char *hay, const char *need);
char *zs_strncpy(char *destin, const char *src, int a);
char *zs_strncat(char *destin, char *src, int a);
char *zs_strdup(const char *str);
char *zs_strchr(const char *str, char chr);
char *zs_strsep(char **str, const char *delim);
void *zs_realloc(void *ptr, size_t new_size, size_t old_size);
int zs_setenv(const char *name, const char *value, int overwrite);
void populate_env_list(list_t **env_list);
char *zs_getenv(list_t *env_list, const char *name);
char *zs_exe_path(char *command, list_t *env_list);
void remove_newline(char *str);
void zs_writestr(const char *str);
void zs_exit_status(int status);

#endif
