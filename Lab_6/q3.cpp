//Q3.  Use multiple inheritance for doing arithmetic operation.
#include <bits/stdc++.h>
using namespace std;
class base
{
public:
	int x;
	base(int p)
	{
		cout<<"Within Class base"<<endl;
		x = p;
	}
};
class derived : public base
{
public:
	int m;
	derived(int p, int q):base(q)
	{
		cout<<"Within Class derived"<<endl;
		m = p;
	}
};
class double_derived : public derived
{
public:
	int sum;
	double_derived(int p, int q):derived(p,q)
	{
		sum = 0;
	}
	void show()
	{
		sum = x + m;
		cout<<"Within Class double_derived"<<endl;
		cout<<"Sum = "<<sum;
	}
};
int main()
{
	int a,b;
	cout<<"Enter 2 values: ";
	cin>>a>>b;
	double_derived ob = double_derived(a,b);
	ob.show();
	return 0;
}
