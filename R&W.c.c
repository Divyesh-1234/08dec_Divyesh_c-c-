#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[20];
    fptr = fopen("D:/Tops Technologies/Assignment/Module-4/R&W.txt", "r");
    printf("%s",fgets(str,15,fptr));
    fclose(fptr);
    return 0;
}