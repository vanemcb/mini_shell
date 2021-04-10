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
char *_pathcat(char *cmd);
void exe(char **argv);
char *_getpath(char *name);
char *_strcat(char *str1, char *str2);
void _nointeractive();
#endif