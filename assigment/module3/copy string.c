#include<stdio.h>
void mystrcpy(char str2[30], char str1[30]);

int main()
{
 char str1[30], str2[30];
 int s;

 printf("Enter string:\n");
 gets(str1);
 
 mystrcpy(str2, str1);
 
 printf("Copied string is: %s", str2);
 
 return 0;
}
void mystrcpy(char str2[30], char str1[30])
{
 int s;
 for(s=0;str1[s]!='\0';s++)
 {
  str2[s] = str1[s];
 }
 str2[s] = '\0';
}