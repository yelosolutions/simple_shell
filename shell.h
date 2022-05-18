#ifndef SHELL_H
#define SHELL_H

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


extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
void exit_cmd(char **command, char *line);


/* handle built ins */
int checker(char **cmd, char *buf);
void prompt_user(void);
int handle_builtin(char **command, char *line);
void exit_cmd(char **command, char *line);
void execution(char *cp, char **cmd);
char *append_path(char *path, char *command);
void handle_signal(int m);
void handle_signal(int m);
char **tokenizer(char *line);
char *test_path(char **path, char *command);
char *append_path(char *path, char *command);
int handle_builtin(char **command, char *line);
void exit_cmd(char **command, char *line);

void print_env(void);

/* string handlers */
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);

void execution(char *cp, char **cmd);
char *find_path(void);

/* helper function for efficient free */
void free_buffers(char **buf);

/**
 * struct builtin - builtin handler.
 * @env: string
 * @exit: string
 *
 * Description: builtin handler
 */
struct builtin
{
	char *env;
	char *exit;
} builtin;

/**
 * struct info - info handler.
 * @final_exit: integer
 * @ln_count: integer
 *
 * Description: info handler
 */
struct info
{
	int final_exit;
	int ln_count;
} info;

/**
 * struct flags - flags handler.
 *
 * @interactive: bool
 *
 * Description: flags handler
 */
struct flags
{
	bool interactive;
} flags;

#endif
