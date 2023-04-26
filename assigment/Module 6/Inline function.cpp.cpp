#include <iostream>
using namespace std;
inline int multiply(int x, int y) 
{
    return x*y;
}
inline int cube(int x) 
{
    return x*x*x;
}

int main() 
{
    int num,mul,cub;
    cout<<"Enter a number:";
    cin >> num;
    mul=multiply(num,num);
    cub=cube(num);
    cout<<"Multiplication result:"<<mul<<endl;
    cout<<"Cubic result:"<<cub<<endl;
    return 0;
}