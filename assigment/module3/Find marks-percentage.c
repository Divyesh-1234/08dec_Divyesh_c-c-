#include <stdio.h>
 
int main()
{
    float Guj,Eng,State,Eco,Account; 
    float total, average, percentage;
 
    printf("Enter marks of five subjects: :- ");
    scanf("%f%f%f%f%f", &Guj,&Eng,&State,&Eco,&Account);
 
    total = Guj + Eng + State + Eco + Account;
    average = total / 5;
    percentage = (total / 500) * 100;
 
    printf("Total marks = %f\n", total);
    printf("Average marks = %f\n", average);
    printf("Percentage = %f", percentage);
 
    return 0;
}