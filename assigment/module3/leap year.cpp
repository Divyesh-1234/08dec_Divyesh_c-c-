#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("leap year");
		
	}
	else 
	{
		printf("not Leap year");
		
	}
	return 0;
	
}
