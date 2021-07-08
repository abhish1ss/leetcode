#include "my_include.h"

char* find_common(char *s1, char *s2)
{
  char *a = malloc(strlen(s1)+1);
  memset(a, 0, strlen(s1)+1);
  int i=0;
  while((*s1 != '\0') && (*s2 != '\0'))
  { 
     if(*s1 == *s2)
     {
       a[i] = *s1;
       i++;
     }
     else
     {
       a[i] = '\0';
       break;
     }
     s1++;
     s2++;
  }
  return a;
}

char * longestCommonPrefix(char ** strs, int strsSize){
  if(strsSize == 0) return "";
  char *a = malloc(strlen(strs[0]));
  strcpy(a, find_common(strs[0], strs[1]));

  for(int i=2;i<strsSize;i++)
     strcpy(a, find_common(a, strs[i]));

  return a;
}

int main()
{
  //char *s[] = {"dog","racecar","car"};
  char *s[] = {"flower", "flow", "flight"};
  printf("\"%s\"", longestCommonPrefix(s, 3));
  return 0;
}
