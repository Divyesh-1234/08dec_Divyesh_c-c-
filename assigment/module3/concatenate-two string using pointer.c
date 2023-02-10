#include<stdio.h>
#include<string.h>
int main()
{
	char fname[50],lname[50];
	char *d,*s;
	int i,j;
	d=&fname;
	s=&lname;
	printf("Enter First name:");
	gets(fname);
	printf("\nEnter Last name:");
	gets(lname);
	for(i=0;*(d+i)!='\0';i++);
	{
		for(j=0;*(s+j)!='\0';j++,i++)
		{
			*(d+i)=*(s+j);
		}
		*(d+i)='\0';
		printf("After join String:%s",d);
	}
	return 0;
}