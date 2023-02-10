#include <stdio.h>
void SortArray(int Size, int* parr)
{
    int i, x, temp; 
    for (i=0;i<Size;i++)
    {
        for (x=i+1;x<Size;x++)
        {
            if(*(parr+x)<*(parr+i))
            {
                temp=*(parr+i);
                *(parr+i)=*(parr+x);
                *(parr+x)=temp;
            }           
        }
    }
    printf("\nSorted Array Elements using Pointer:");
    for(i=0;i<Size;i++)
    {
        printf("%d\n",*(parr+i));
    }   
}
int main()
{
    int Size,i,arr[Size];
    printf("Enter Array Size to Sort using Pointers:");
    scanf("%d",&Size);
    printf("Please Enter %d elements of an Array:\n", Size);
    for (i=0;i<Size;i++)
    {
        scanf("%d",&arr[i]);
    }   
    SortArray(Size,arr);   
    printf("\n");   
}
