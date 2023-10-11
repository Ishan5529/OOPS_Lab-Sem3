//3. WAP to create a member as friend function.
#include <iostream>
using namespace std;
class add
{
	int a,b;
	public:
		add(int x, int y)
		{
			a = x;
			b = y;
		}
		friend void addf(add ob);
};
void addf(add ob)
{
	int s = ob.a + ob.b;
	cout<<"Sum = "<<s;
}
int main()
{
	int a, b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	add ob = add(a,b);
	addf(ob);
}
