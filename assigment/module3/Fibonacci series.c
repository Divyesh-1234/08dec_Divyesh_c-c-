#include<stdio.h>
int u,g,a=0,b=1,r;
void fibo(int);

int main()
{
    printf("Enter the value of no:");
    scanf("%d",&g);
    fibo(g);
    return 0;
}
void fibo(int g)
{
    printf("Fibonacci series:\n%d\n%d",a,b);
    for(u=3;u<=g;u++)
    {
    	r=a+b;
    	printf("\n%d",r);
    	a=b;
    	b=r;
	}
}