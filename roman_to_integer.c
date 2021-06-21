#include "my_include.h"

int roman_to_int(char c)
{
  switch(c)
  {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
    default:
      return 0;
  }
}

int double_char(char c1,char c2)
{
  if(c1 == 'I' && c2 == 'V')
   return 4;
  if(c1 == 'I' && c2 == 'X') 
   return 9;
  if(c1 == 'X' && c2 == 'L')
   return 40; 
  if(c1 == 'X' && c2 == 'C')
   return 90; 
  if(c1 == 'C' && c2 == 'D')
   return 400; 
  if(c1 == 'C' && c2 == 'M') 
   return 900;
  return 0;
}

int romanToInt(char * s){
  int i=0, sum = 0;
  while(s[i] != '\0')
  {
    if(double_char(s[i], s[i+1]) != 0)
    {
      sum += double_char(s[i], s[i+1]);
      i+=2;
      continue;
    }
    sum = sum + roman_to_int(s[i++]);
  } 
  return sum;
}

int main()
{
  char a[] = "IV";
  printf("%d\n", romanToInt(a));
  //printf("%d", roman_to_int('Z'));
  return 0;
}
