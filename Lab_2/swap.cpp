//3. WAP to swap two numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    a += b;
    b = a-b;
    a -= b;
    cout<<"Swapped Values:\nA = "<<a<<endl<<"B = "<<b;
    return 0;
}
