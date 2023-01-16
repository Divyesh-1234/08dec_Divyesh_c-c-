#include<stdio.h>
int main()
{
	char patel;
	printf("Eneter the alphabet:");
	scanf("%c",&patel);
	if(patel=='a'||patel=='e'||patel=='i'||patel=='o'||patel=='u'||
	patel=='A'||patel=='E'||patel=='I'||patel=='O'||patel=='U')
	{
		printf("%c is Vowel",patel);
	}
	else
	{
		printf("%c is Consonant",patel);
	}
	return 0;
}
