#ifndef _SHELL_H_
#define _SHELL_H_
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>
#include <ctype.h>

/*excecute*/
#define PATH_MAX_LENGTH 4096
#define PATH_SEPARATOR ":"
#define PROMPT "$ "
#define MAX_TOKENS 1024
#define BUFFER_SIZE 1024

/* ask_prompt.c */
void prompt(void);

/* getinput.c */
char *get_input(void);
void free_last_input(void);
/* getline.c*/
void *get_line(void);

/* builtin functions */
int check_for_builtin(char **args);
int execute_buitlin(char *cmd, char **args);
void shell_help(void);
void shell_exit(char **args);
void shell_cd(char **args);
int shell_setenv(char **args);
int shell_unsetenv(char **args);
int shell_env(void);
int shell_clear(char **args);

/* handle_signals.c */
void handle_sigint(int sig);
void handle_sigquit(int sig);
void handle_sigstp(int sig);

/* execute.c */
int execute(char **args);

/* parser.c */
char **tokenize(char *str, const char *delim);
char **tokenize_input(char *input);

/* getenv.c */
char *_getenv(const char *name);

/* getpath.c */
char *get_path(void);

/* findpath.c */
char *find_in_path(char *command);

/* release.c */
void free_error(char **argv, char *arg);
void free_tokens(char **ptr);
void free_path(void);

/* erroor.c */
void _puts(char *str);
void _puterror(char *err);

/* function1_utils.c */
int _strlen(const char *);
int _strcmp(const char *s1, const char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strstr(char *haystack, char *needle);
char *_strchr(char *s, char c);

/* function2_utils.c */
char *_strcpy(char *, char *);
char *_strcat(char *, const char *);
char *_strdup(const char *);
int _putchar(char);
unsigned int _strspn(char *s, char *accept);

/* function3_utils.c */
int _atoi(const char *str);
char *_memset(char *, char, unsigned int);
char *_memcpy(char *dest, char *src, unsigned int n);
void *_realloc(void *, unsigned int, unsigned int);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif
