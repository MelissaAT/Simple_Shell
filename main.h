#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
void free_grid(char **grid);
int _putchar(char c);
void handle_sigint(int sig);
char **_tokenization(char *s1, char *s2);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int execute_command(char **args, char **env);
int path_conc(char **args, char**token);
int builtin_command(char *command);
char *concatenate_path(char *dir, char *command);
#endif
