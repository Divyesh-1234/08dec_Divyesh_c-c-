#include<iostream>
#include<string>
using namespace std;
class Lecture
{
	public:
		string name;
		string subject;
		string course;
		int lectures,i;
		add_lecture(string na,string sub,string cou,int num)
		{
			name=na;
			subject=sub;
			course=cou;
			lectures=num;
		}
		void display()
		{
			cout<<"Name of lecturer:"<<name<<endl;
			cout<<"Subject:"<<subject<<endl;
			cout<<"Course:"<<course<<endl;
		}
};
int main()
{
	Lecture lec1,lec2,lec3,lec4,lec5;
	lec1.add_lecture("Kapil Dave","Mathematics","Matrix",20);
	lec2.add_lecture("Harshal Dave","English","Chapter explain",30);
	lec3.add_lecture("Dhiren Bhanushali","Physics","Quantum Mechanics",15);
	lec4.add_lecture("Nikhil Trivedi","Biology","Genetic",15);
	lec5.add_lecture("Alphesh Dave","Chemistry","Organic chemistry",30);
	
	lec1.display();
	cout<<endl;
	lec2.display();
	cout<<endl;
	lec3.display();
	cout<<endl;
	lec4.display();
	cout<<endl;
	lec5.display();
	cout<<endl;
	return 0;
}