#include<stdio.h>
struct npdata
{
    int id,age;
    char name[20];
    char address[30];
};
int main()
{
    struct npdata np[20];
    int i;
    for (i = 0; i < 5; i++)
    {
    	printf("\nEnter employee id:");
    	scanf("%d",&np[i].id);
    	printf("\nEnter employee name:");
    	scanf("%s",&np[i].name);
    	printf("\nEnter employee address:");
    	scanf("%s",&np[i].address);
    	printf("\nEnter employee age:");
    	scanf("%d",&np[i].age);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nEmployee id:%d",np[i].id);
    	printf("\nEmployee name:%s",np[i].name);
    	printf("\nEmployee address:%s",np[i].address);
    	printf("\nEmployee age:%d",np[i].age);
    }
}