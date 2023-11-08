//Q1.  WAP to show that a derived class doesn't have access to private members but full access to the class.
#include <bits/stdc++.h>
using namespace std;
class base
{
private:
	int a;
public:
	int x;
	base(int p, int q)
	{
		x = p;
		a = q;
	}
	void showB()
	{
		cout<<"A = "<<a;
	}
};
class derived : public base
{
public:
	int m;
	derived(int p, int q, int r):base(q,r)
	{
		m = p;
	}
	void show()
	{
		cout<<"M = "<<m<<endl;
		cout<<"X = "<<x<<endl;
		showB();
	}
};
int main()
{
	int a,b,c;
	cout<<"Enter 3 values: ";
	cin>>a>>b>>c;
	derived ob = derived(a,b,c);
	ob.show();
	return 0;
}
