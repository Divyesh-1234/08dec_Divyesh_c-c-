#include<iostream>
#include<string.h>
using namespace std;
class bank
{
	int acno;
	char account[100],accounttype[100];
	float balance;
public:
	bank 
	(int accno, 
	char *name,
	char *type,
	float bl)
	{
		acno=accno;
		strcpy(account, name);
		strcpy(accounttype, type);
		balance=bl;
	}
		void deposit();
        void withdraw();
        void Show();			
};
void bank::deposit()
{
	int depositamount;
	cout<<"enter the deposist amount value:";
	cin>>depositamount;
	balance+=depositamount;
}
void bank::withdraw()
{
	int withdrawamount;
	cout<<"enter the withdraw amount value:";
	cin>>withdrawamount;
	if(withdrawamount>balance)
	{
		cout<<"cannot withdrawn amount"<<endl;
	}
	balance-=withdrawamount;
}
void bank::Show()
{
	cout<<"**********ACCOUNT DETAIL**********"<<endl;
		cout<<"\nName:"<<account;
        cout<<"\nAccount No.:"<<acno;
        cout<<"\nAccount Type:"<<accounttype;
        cout<<"\nBalance:"<<balance;	
}
int main()
{
	 int acno,choice;
        char acnm[100], actp[100];
        float Bal;
        cout<<"**********ENTER DETAILS**********"<<endl;
        cout<<"1.Account Name:";
        cin>>acnm;
        cout<<"2.Account No.:";
        cin>>acno;
        cout<<"3.Account Type:";
        cin>>actp;
        cout<<"4.Balance:";
        cin>>Bal;
        bank s1(acno,acnm,actp,Bal);
		cout<<"\n1. Deposit";
		cout<<"\n2. withdraw";
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
			s1.deposit();
			break;
			
			case 2:
			s1.withdraw(); 
			break;
			default:
			cout<<"Invaild choice";
				
		}  
        s1.Show();
        return 0;
}