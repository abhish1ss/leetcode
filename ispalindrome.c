#include "my_include.h"

bool isPalindrome(int x){
  if(x<0)
    return false;
  int temp = x;
  int rev = 0;
  while(temp){
    if(rev > INT_MAX/10) return false;
    rev = rev * 10 + temp%10;
    temp=temp/10;
  }
  return ((x == rev) ? true : false);
}

int main()
{
  int x=121;
  printf("%d\n", isPalindrome(x));
  return 0;
}
