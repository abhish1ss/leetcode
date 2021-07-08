#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>



#define PRINT_LOG(...)           \
        char argString[1024]; sprintf(argString, __VA_ARGS__);    \
        fprintf(stderr, "%s|%d|%s| [%s]\n", __FILE__, __LINE__, __func__, argString); 
