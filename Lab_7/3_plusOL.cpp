//Q3. Operator Overloading using '+' Operator
#include <iostream>
using namespace std;

class Complex {
private:
	int real, imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}
	Complex operator+(Complex const& obj)
	{
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void disp()
	{
		cout<<real<<" + "<<imag<<"i\n";
	}
};

int main()
{
	cout<<"Enter 2 complex numbers:"<<endl;
	int r,i;
	cin>>r>>i;
	Complex c1(r,i);
	cin>>r>>i;
	Complex c2(r,i);
	Complex c3 = c1 + c2;
	c3.disp();
}
