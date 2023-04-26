#include<iostream>
using namespace std;
class simple
{
    int p,y,si;
	float r;
	public:
    simple()
    {
        cout<<"Enter the principal number:";
		cin>>p;
		cout<<"Enter the Year number:";
		cin>>y;
		cout<<"Enter the rate number:";
		cin>>r;
		si=(p*y*r)/100;
    }
    void showdata()
    {
        cout<<"Simple Interest:"<<si;
    }
};
int main()
{
    simple si;
    si.showdata();
    return 0;
}