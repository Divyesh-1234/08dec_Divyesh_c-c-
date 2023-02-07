#include <stdio.h>
int main()
{
    int num, dk, p = 0;

    printf("Enter an Number: ");
    scanf("%d", &num);
    
    for (dk = 1; dk <= num; dk++)
    {
        if (num % dk == 0)
        {
            p++;
        }
    }
    if (p == 2)
    {
        printf("%d is a Prime Number.", num);
    }
    else 
    {
        printf("%d is not a Prime Number.", num);
    }
    return 0;
}