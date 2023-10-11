//2. Using inline function calculate square root of a number.
#include <bits/stdc++.h>
using namespace std;
inline void sqr(float n)
{
	float s = sqrt(n);
	cout<<"Square Root: "<<s;
}
int main()
{
	float n;
	cout<<"Enter a number: ";
	cin>>n;
	sqr(n);
}
