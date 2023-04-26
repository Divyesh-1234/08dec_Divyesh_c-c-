#include<iostream>
using namespace std;
class temp 
{
 	public:
 	int x,y,q;
 	void input() 
{
	cout<<"Enter First Number:";
	cin>>x;
	cout<<"Enter Second Number:";
 	cin>>y;
}
	friend void swap(temp &t);
	void display() 
	{
 		cout<<endl<<"After Swap x is:"<<x;
 		cout<<endl<<"After Swap y is:"<<y;
	}
};
void swap(temp &t) 
{
    t.q = t.x;
    t.x = t.y;
    t.y = t.q;
}
int main() 
{
    temp t1;
    t1.input();
    swap(t1);
    t1.display();
    return 0;
}