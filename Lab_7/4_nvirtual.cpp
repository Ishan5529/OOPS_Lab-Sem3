//Q4.  Calculate area of a shape without using virtual function
#include <bits/stdc++.h>
using namespace std;
class base
{
public:
	int a,b;
	base(int p, int q)
	{
		a = p;
		b = q;
	}
	void area()
	{
		int ar = a*b;
		cout<<"Area of Rectangle: "<<ar;
	}
};
int main()
{
	int a,b;
	cout<<"Enter Sides of Rectangle: ";
	cin>>a>>b;
	base ob(a,b);
	ob.area();
	return 0;
}
