#include<stdio.h>
int main()
{
    int eng,hindi,guj,ss,com,total;
    float per;
    

    printf("enter eng mark:");
    scanf("%d",&eng);
    printf("enter hindi mark:");
    scanf("%d",&hindi);
    printf("enter guj mark:");
    scanf("%d",&guj);
    printf("enter ss mark:");
    scanf("%d",&ss);
   printf("enter com mark:");
    scanf("%d",&com);
    total=eng+hindi+guj+ss+com;
    per=total/5;
    printf("\ntotal mark:%d",total);
    printf("\ntotal per:%f",per);
    if(per>75)
    {
        printf("\ndistinction");
        
    }
    else if ((per>60)&(per<=75))
    {
        printf("\nfirst class");
    
    }
    else if((per>50)&(per<=60))
    {
        printf("\nsecond class");
    
    }
    else if ((per>35)&(per<=50))
    {
        printf("\npass class");
    
    }
    else
    {
        printf("\nfail");
        
    }
    return 0;
    
    
}