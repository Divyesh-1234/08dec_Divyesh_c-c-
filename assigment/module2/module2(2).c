#include<stdio.h>
#include<math.h>
int main()
{
    float si,ci,p,r,n;
     printf("Enter the p value:");
     scanf("%f",&p);
     printf("Enter the r value:");
     scanf ("%f",&r);
     printf("Enter the n value:");
     scanf("%f",&n);
     si=p*r*n/100;
     printf("Simpal interest:%f",si);
     ci=p*pow((1+r/100),n)-p;
     printf("\ncompound interest:%f",ci);
     

    return 0;
}
