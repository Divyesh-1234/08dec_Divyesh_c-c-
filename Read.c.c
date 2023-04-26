#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[20] = {"Hello"};
    fptr = fopen("D:/Tops Technologies/Assignment/Module-4/Read.txt", "w");
    fprintf(fptr,"%s",str);
    fclose(fptr);
    
}