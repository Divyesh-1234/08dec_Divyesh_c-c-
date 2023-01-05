
#include <stdio.h>

int main()
{
    //int a;
    char ab;
    printf("\nenter the a value:");
    scanf("%c",&ab);
    if ((ab>='a' &&ab<='z')|| (ab>='A' &&ab<='Z'))
    
    {
        printf ("this is an alphabet:\n");
        
    }
    else if ((ab>='0' && ab<='9'))
    {
        printf("this is digit:\n");
        
    }
    else 
    {
        printf ("this is a special character:");
        
    }
        
    
    
    return 0;
}
