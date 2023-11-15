#ifndef _HEADERS
#define _HEADERS

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

char *_strtok(char *str, const char *delim);
int word_cnt(char *str);
void execute(char *argv[], int argc, char *filename, int *err);
char *_strdup(char *str);
void _puts(char *str);
int _putchar(char c);

#endif
