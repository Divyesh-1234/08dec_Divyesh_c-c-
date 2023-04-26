#include <iostream>
#include <string>
using namespace std;
class MyString 
{
public:
    string str;
    MyString(string s) 
	{
        str = s;
    }

    MyString operator+(const MyString &other) 
	{
        return MyString(str + other.str);
    }

    void display() 
	{
        cout<<str<<endl;
    }
};

int main() 
{
    char str1[30], str2[30];
    cout<<"Enter the first string:";
    cin>>str1;
    MyString s1(str1);
    cout<<"Enter the second string:";
    cin>>str2;
    MyString s2(str2);
    MyString s3=s1+s2;
    cout<<"Full string is:";
    s3.display();
    return 0;
}