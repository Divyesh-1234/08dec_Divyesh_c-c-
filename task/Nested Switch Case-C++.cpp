#include<iostream>
using namespace std;

int main() 
{

	char grade;

	cout<<"Please enter your grade"<<endl;
	cin>>grade;


	switch(grade) 
	{
	case 'A':
		cout << "Excellent" << endl;
		break;

	case 'B':
		cout << "Very Good" << endl;
		break;

	case 'C':
		cout << "Your passed" << endl;
		break;

	case 'D':
		cout << "Your failed " << endl;
		break;

	default:
		cout << "Result Not Found" << endl;

	}
	
	return 0;

}