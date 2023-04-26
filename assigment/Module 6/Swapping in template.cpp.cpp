#include <iostream>
using namespace std;
template <typename T>
void Swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int i1,i2;
    	cout<<"Enter the int1 number:";
    	cin>>i1;
        cout<<"Enter the int2 number:";
        cin>>i2;
    float f1,f2;
        cout<<"Enter the float1 number:";
        cin>>f1;
        cout<<"Enter the float2 number:";
        cin>>f2;
    char c1,c2;
        cout<<"Enter the char1 number:";
        cin>>c1;
        cout<<"Enter the char2 number:";
        cin>>c2;

        cout<<"Before passing data to function template:\n";
        cout<<"int1="<<i1<<"\nint2="<<i2;
        cout<<"\nfloat1="<<f1<<"\nfloat2="<<f2;
        cout<<"\ncharacter1="<<c1<<"\ncharacter2="<<c2;

        	Swap(i1,i2);
        	Swap(f1,f2);
        	Swap(c1,c2);

        cout<<"\n\nAfter passing data to function template:\n";
        cout<<"int1="<<i1<<"\nint2 ="<<i2;
        cout<<"\nfloat1="<<f1<<"\nfloat2="<<f2;
        cout<<"\ncharacter1="<<c1<<"\ncharacter2="<<c2;

        return 0;
}