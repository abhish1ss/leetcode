#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char argString[1024] = ""; 

#define PRINT_LOG(...)           \
        sprintf(argString, __VA_ARGS__);    \
        fprintf(stdout, "%s|%d|%s|%s\n", __FILE__, __LINE__, __func__, argString); 
