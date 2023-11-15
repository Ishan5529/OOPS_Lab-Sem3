//Q1.  WAP to show the order of constructor using multiple inheritance.
#include <bits/stdc++.h>
using namespace std;
class base
{
public:
	int x;
	base(int x)
	{
		cout<<"Within Base Class"<<endl;
		this->x = x;
		cout<<"X = "<<x<<endl;
	}
};
class derived : public base
{
public:
	int y;
	derived(int p, int q):base(q)
	{
		cout<<"Within Derived Class"<<endl;
		y = p;
		cout<<"Y = "<<y<<endl;
	}
};
class d_derived : public derived
{
public:
	int z;
	d_derived(int p, int q, int r):derived(q,r)
	{
		cout<<"Within d_derived"<<endl;
		z = p;
		cout<<"Z = "<<z;
	}
};
int main()
{
	cout<<"Enter 3 numbers: ";
	int a,b,c;
	cin>>a>>b>>c;
	d_derived ob(a,b,c);
}
