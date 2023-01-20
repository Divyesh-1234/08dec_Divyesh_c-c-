#include<stdio.h>
int main( )   
{
int i,j,k,l;
int cha;
printf("Enter the character :");
scanf("%c",&cha);
for(i=0;i<=11;i++)
{
for(j=10;j>=i;j--)
{
printf(" ");  
}
for(k=0;k<=2;k++)
{
printf("%c",cha); 
 }
for(l=1;l<=i;l++)
{
if(i>4&&i<7)
{
printf("%c%c",cha,cha);  
}
else
{
printf("  ");  
}
}
for(k=0;k<=2;k++)
{
printf("%c",cha);
}
for(j=10;j>=i;j--)
{
printf(" ");  
}
printf("\n");
}

}
