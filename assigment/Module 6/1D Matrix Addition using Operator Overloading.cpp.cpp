#include <iostream>
using namespace std;
class Matrix 
{
public:
	int size;
    int *data;
    Matrix(int n) 
	{
        size=n;
        data=new int [n];
    }
    void input() 
	{
        for(int i= 0; i < size; i++) 
		{
            cin >> data[i];
        }
    }
    void display() 
	{
        for (int i = 0; i < size; i++) 
		{
            cout << data[i] << " ";
        }
        cout << endl;
    }
    Matrix operator+(const Matrix& other) 
	{
        Matrix result(size);
        for (int i = 0; i < size; i++) 
		{
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }
};

int main() 
{
    int n;
    cout<<"Enter size of matrices:";
    cin>>n;
    Matrix A(n), B(n);
    cout<<"Enter elements of matrix A:"<<endl;
    A.input();
    cout<<"Enter elements of matrix B:"<<endl;
    B.input();
    Matrix C=A+B;
    cout<<"Result of addition:"<<endl;
    C.display();
    return 0;
}