#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
extern char **environ;
char **_token(char *str, char *sep);
void exe(char **argv);
char *_getenv(char *name);
char *_strcat(char *str1, char *str2);
char *_concpath(char **split_path, char *cmd);
#endif