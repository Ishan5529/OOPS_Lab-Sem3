//Q.2  WAP to prefix and postfix '++' operator using operator overloading
#include <bits/stdc++.h>
using namespace std;

class base {
private:
	int i;

public:
	base(int i)
	{
		this->i = i;
	}
	base& operator++()
	{
		++i;
		return *this;
	}
	base operator++(int)
    {
        base temp = *this;
        ++i;
        return temp;
    }
	void display()
	{
		cout << "i = " << i << endl;
	}
};
int main()
{
	cout<<"Enter a number: ";
	int a;
	cin>>a;
	base i1(a);
	cout << "Before pre-increment: ";
	i1.display();
	base i2 = ++i1;
	cout << "After pre-increment: " << endl;
	cout << "i1: ";
	i1.display();
	cout << "i2: ";
	i2.display();
	cout << "Before post-increment: ";
	i1.display();
	base i3 = i1++;
	cout << "After post-increment: " << endl;
	cout << "i1: ";
	i1.display();
	cout << "i3: ";
	i3.display();
}
