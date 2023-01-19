#include <stdio.h>  
int main()  
{
    int n,p,k;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(p=1; p<=n; p++)
    {
        for(k=p; k<=n; k++)
        {
            printf(" ");
        }
        for(k=1; k<=p; k++)
        {
            printf("%d",k);
        }
        for(k=p-1; k>=1; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}  