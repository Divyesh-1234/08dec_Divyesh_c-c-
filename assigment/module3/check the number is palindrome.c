#include<stdio.h>
int checkPalindrome(int num)
{

    static int sum=0,v;

    if(num!=0)
	{
        v=num%10;
        sum=sum*10+v;
        checkPalindrome(num/10);
    }
    return sum;
}
int main()
{
    int num,sum;
    printf("Enter any number:");
    scanf("%d",&num);
    sum = checkPalindrome(num);
    if(num==sum)
    {
    	printf("\n%d is a palindrome\n",num);
	}    
    else
    {
    	printf("\n%d is not a palindrome\n",num);
	}
    return 0;
}