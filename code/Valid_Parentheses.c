#include "../include/my_include.h"

bool isValid(char *s){
  int top=-1;
  char *stack;
  if(strlen(s) < 2)
      return false;

  stack = (char *)malloc(strlen(s));

  while(*s)
  {
     if(*s == '(' || *s == '{' || *s == '[')
     {
       stack[++top] = *s;
     }
     else
     {
        if(top < 0)
          return false;

        if(*s == ')' && stack[top] == '(')
        {
          top--;
          s++;
          continue;
        }
        else if(*s == '}' && stack[top] == '{')
        {
          top--;
          s++;
          continue;
        }
        else if(*s == ']' && stack[top] == '[')
        {
          top--;
          s++;
          continue;
        }
        else
        {
          return false;
        }
     }
     s++;
  }
  if(top > -1)
     return false;
  return true;
}


int main()
{ 
  char a[1024] = "]";
  printf("%d", isValid(a));
  return 0;
}
