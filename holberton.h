#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
char **_token(char *str);
void exe(char **argv);
#endif