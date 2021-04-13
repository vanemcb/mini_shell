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
int exe(char **argv);
char *_getpath(char *name);
char *_strcat(char *str1, char *str2);
int _nointeractive(void);
int _interactive(void);
int _builtincalls(char *str);
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _strncmp(char *s1, char *s2, int n);
int space(char *str);

#endif /* HOLBERTON_H */
