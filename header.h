#ifndef _HEADERS
#define _HEADERS

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

int word_cnt(char *str);
void execute(char *argv[], char *filename, int *err);

#endif
