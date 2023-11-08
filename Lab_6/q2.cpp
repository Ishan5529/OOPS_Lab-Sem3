//Q2.  WAP to explain single inheritance which inherit field and method.
#include <bits/stdc++.h>
using namespace std;
class base
{
public:
	int x;
	base(int p)
	{
		x = p;
	}
	void showB()
	{
		cout<<"Using method from Base Class"<<endl;
		cout<<"X = "<<x;
	}
};
class derived : public base
{
public:
	int m;
	derived(int p, int q):base(q)
	{
		m = p;
	}
	void show()
	{
		cout<<"M = "<<m<<endl;
		cout<<"Without using method from Base Class"<<endl;
		cout<<"X = "<<x<<endl;
		showB();
	}
};
int main()
{
	int a,b;
	cout<<"Enter 2 values: ";
	cin>>a>>b;
	derived ob = derived(a,b);
	ob.show();
	return 0;
}
