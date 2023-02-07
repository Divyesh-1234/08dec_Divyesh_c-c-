#include<stdio.h>
int main()
{
	int d,p,k,number[5];
	printf("Enter the number:\n");
	for(d=0;d<5;d++)
	scanf("%d",&number[d]);
	//Ascending order
	for(d=0;d<5;d++)
	{
		for(p=d+1;p<5;p++)
		{
			if(number[d]>number[p])
			{
				k=number[d];
				number[d]=number[p];
				number[p]=k;
			}
		}
	}
	printf("Ascending order:\n");
	for(d=0;d<5;d++)
	printf("%d\n",number[d]);
	//Descending order
	for(d=0;d<5;d++)
	{
		for(p=d+1;p<5;p++)
		{
			if(number[d]<number[p])
			{
				k=number[d];
				number[d]=number[p];
				number[p]=k;
			}
		}
	}
	printf("Descending order:\n");
	for(d=0;d<5;d++)
	printf("%d\n",number[d]);
	return 0;
}
