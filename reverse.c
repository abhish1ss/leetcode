#include<limits.h>
#include<stdio.h>

int reverse(int x){
    int n=0;
    if(x<INT_MIN || x>INT_MAX)
        return 0;
        while(x)
        {
	    printf("n=%d, x=%d\n",n,x);
	    if(n> INT_MAX/10 || n<INT_MIN/10) return 0;
            n=(n*10)+(x%10);
            x=x/10;
        }
        return n;
}

int main()
{
	int n=1534236469;
	printf("%d\n", reverse(n));
	return 0;
}
