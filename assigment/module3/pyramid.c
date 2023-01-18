#include<stdio.h>
 
int main()
{
    int d,k;
 
    for(d=0; d< 10; d++)
    {
        for(k=0;k<=d;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
