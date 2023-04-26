#include <iostream>
using namespace std;
int main() 
{
    int*myInt=new int(5);
    cout<<"myInt="<<*myInt<<endl;
    delete myInt;
    int* myArray=new int[3];
    myArray[0]=1;
    myArray[1]=2;
    myArray[2]=3;
    for (int i=0;i<3;i++) 
	{
        cout <<"myArray["<<i<<"]="<<myArray[i]<<endl;
    }
    delete[] myArray;
    return 0;
}