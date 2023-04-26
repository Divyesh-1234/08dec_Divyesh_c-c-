#include<iostream>
#include<string.h>
using namespace std;
class cricket
{
	public:
		char name[20],country[20];
		void getdata()
		{
			cout<<"**********PLAYER**********"<<endl;
			cout<<"Enter cricketer name:";
			cin>>name;
			cout<<"Enter cricketer country name:";
			cin>>country;
		}	
};
class batsman: public cricket
{
	private:
		int runs,performance;
		float average;
	public:
		void inputdata()
		{
			cricket::getdata();
			cout<<"Enter total runs:";
			cin>>runs;
			cout<<"Enter best performance:";
			cin>>performance;
			average=(float)runs/20.0;
		}
		void displaydata()
		{
			cout<<"**********PLAYER INFORMATION**********"<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Country:"<<country<<endl;
			cout<<"Average runs:"<<average<<endl;
			cout<<"Best performance:"<<performance<<endl;
		}
};
int main()
{
	batsman m;
	m.inputdata();
	m.displaydata();
	return 0;
}