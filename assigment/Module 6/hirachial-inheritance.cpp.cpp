#include<iostream>
#include<string>
using namespace std;
class person
{
	public:
		char name[20];
		int age;
		void writedata()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter age:";
			cin>>age;
		}
		void readdata()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
		}
};
class student : public person
{
	public:
		float per;
		void writedata()
		{
			person::writedata();
			cout<<"Enter percentage:";
			cin>>per;
		}
		void readdata()
		{
			person::readdata();
			cout<<"Percentage"<<per<<endl;
		}
};
class teacher : public person
{
	public:
		float sal;
		void writedata()
		{
			person::writedata();
			cout<<"Enter Salary:";
			cin>>sal;
		}
		void readdata()
		{
			person::readdata();
			cout<<"Salary:"<<sal<<endl;
		}
};
int main()
{
	student s;
	teacher t;
	cout<<"Enter student details:"<<endl;
	s.writedata();
	cout<<endl<<"Enter teacher details:"<<endl;
	t.writedata();
	cout<<endl<<"**********Student details**********"<<endl;
	s.readdata();
	cout<<endl<<"**********Teacher details**********"<<endl;
	t.readdata();
	return 0;
}