//2.  Arithmetic addition, subtraction, multiplication and division using operators.
#include <bits/stdc++.h>
using namespace std;
void add(double a, double b)
{
    cout<<"Addition: "<<(a+b)<<endl;
}
void sub(double a, double b)
{
    cout<<"Subtraction: "<<(a-b)<<endl;
}
void prod(double a, double b)
{
    cout<<"Product: "<<(a*b)<<endl;
}
void div(double a, double b)
{
    cout<<"Division: "<<(a/b)<<endl;
}
int main()
{
    double a,b;
    int n;
    cout<<"Please select:\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5) Exit Process\n\nEnter your choice [1/2/3/4/5]: ";
    cin>>n;
    while (n!=5)
    {
        cout<<"Enter two operands: ";
        cin>>a>>b;
        if (n == 1)
            add(a,b);
        else if (n == 2)
            sub(a,b);
        else if (n == 3)
            prod(a,b);
        else if (n == 4)
            div(a,b);
        else
            cout<<"Invalid Choice of Operation"<<endl;
        cout<<"Enter your choice [1/2/3/4/5]: ";
        cin>>n;
    }
    return 0;
}
