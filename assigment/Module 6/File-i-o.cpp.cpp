#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    string write, read;
    ofstream out;
    out.open("D:/Tops Technologies/Assignment/Module-6/file-i-o.txt");
    cout<<"Enter the string:";
    cin>>write;
    out<<write;
    out.close();
    ifstream in("D:/Tops Technologies/Assignment/Module-6/file-i-o.txt");
    in>>read;
    cout<<read;
    in.close();
    return 0;
}