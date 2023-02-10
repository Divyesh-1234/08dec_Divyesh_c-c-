#include<stdio.h>
double a,b,c=1;
void getdata()
{
	printf("\n Enter factorial number:");
	scanf("%lf",&b);
	for(a=1;a<=b;a++)
	{
		c=c*a;
	}
}
void showdata()
{
	printf("\n show to factorial number:%lf",c);
}
int main()
{
	getdata();
	showdata();
	return 0;
}