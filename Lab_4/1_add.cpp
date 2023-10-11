//1. Define an inline function that print addition of 2 integers.
#include <iostream>
using namespace std;
inline void add(int a, int b)
{
	cout<<"Sum is "<<(a+b);
}
int main()
{
	int a,b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	add(a,b);
}
