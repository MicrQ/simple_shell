#ifndef _HEADERS
#define _HEADERS

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

int word_cnt(char *str);
void execute(char *argv[], int argc, char *filename, int *err);
char *rcv_command(void);

#endif
