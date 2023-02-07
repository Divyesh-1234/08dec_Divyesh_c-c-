#include <stdio.h>
#define AB 5
#define MAX 5

int main() 
{
	float N[AB];
	int p;
	printf("Input the 5 members of the array:\n");
	for(p = 0; p < AB; p++) 
	{
		scanf("%f", &N[p]);
	}
	for(p = 0; p < AB; p++) 
	{
		if(N[p] < MAX) 
		{
			printf("D[%d] = %.1f\n", p, N[p]);
		}
	}
	return 0;
}