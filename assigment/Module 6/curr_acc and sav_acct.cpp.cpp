#include<iostream>
using namespace std;
class Account 
{
protected:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;
public:
    Account(string name, int number, string type, double bal) 
	{
        customerName = name;
        accountNumber = number;
        accountType = type;
        balance = bal;
    }
    void deposit(double amount) 
	{
        balance += amount;
    }

    virtual void displayBalance() 
	{
        cout<<"Balance:"<<balance<<endl;
    }

    virtual void depositInterest() 
	{
		
    }
    virtual void withdraw(double amount) 
	{
        balance -= amount;
    }

    virtual void checkMinimumBalance() 
	{
    }
};
class Curr_Acc : public Account 
{
public:
    Curr_Acc(string name, int number, double bal) : Account(name, number, "Current", bal){}
    void displayBalance() 
	{
        cout << "Current account balance: " << balance << endl;
    }
    void withdraw(double amount) 
	{
        if (balance - amount < 0) 
		{
            cout << "Insufficient funds" << endl;
            return;
        }
        balance -= amount;
        cout << "Amount withdrawn: " << amount << endl;
    }
    void checkMinimumBalance()
	{
        if (balance < 1000) 
		{
            balance -= 50;
            cout << "Minimum balance penalty: 50" << endl;
        }
    }
};
class Sav_Acc : public Account 
{
public:
    Sav_Acc(string name, int number, double bal) : Account(name, number, "Savings", bal) {}
    void displayBalance()
	{
        cout << "Savings account balance: " << balance << endl;
    }

    void depositInterest()
	{
        double interestRate = 0.05;
        double interest = balance*interestRate;
        balance += interest;
        cout<<"Interest deposited:"<<interest<<endl;
    }

    void withdraw(double amount)
	{
        if (balance - amount < 500) 
		{
            cout << "Insufficient funds or minimum balance requirement not met" << endl;
            return;
        }
        balance -= amount;
        cout << "Amount withdrawn: " << amount << endl;
    }
};
int main() 
{
    Curr_Acc c("John Doe", 123, 2000);
    Sav_Acc s("Jane Smith", 456, 5000);
    c.deposit(500);
    c.displayBalance();
    c.checkMinimumBalance();
    s.deposit(1000);
    s.displayBalance();
    s.depositInterest();
    s.withdraw(2000);
    s.displayBalance();
    return 0;
}