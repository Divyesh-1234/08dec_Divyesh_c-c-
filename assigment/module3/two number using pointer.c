#include<stdio.h>
int main()
{
	int *d,*k;
	int num1,num2,addition;
	printf("Enter the First number:");
	scanf("%d",&num1);
	printf("Enter the Second number:");
	scanf("%d",&num2);
	d=&num1;
	k=&num2;
	addition=*d+*k;
	printf("Two number addition:%d",addition);
	return 0;
}