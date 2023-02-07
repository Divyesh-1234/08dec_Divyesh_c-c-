#include<stdio.h>
int main()
{
    int b[10],i,max;
    printf("Enter any number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    max=b[0];
    for(i=0;i<10;i++)
    {
        if(max<b[i])
        max=b[i];
    }
    {
        printf("maximum number array is%d",max);
    }
    return 0;
}  

