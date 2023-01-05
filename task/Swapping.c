
#include <stdio.h>

int main()
{
    int a,b;
    
    int temp;
    
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b:");
    scanf("%d", &b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping:\na:%d\nb:%d",a,b);

    return 0;
}
