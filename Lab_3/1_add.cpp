#include <bits/stdc++.h>
using namespace std;
class add
{
    public:
        float real, imag;
        add(float r, float f)
        {
            real = r;
            imag = f;
        }
        void addition(add ob2)
        {
            float r = real + ob2.real;
            float im = imag + ob2.imag;
            cout<<"Sum: "<<r<<" + ";
            cout<<im<<" i";
        }
};
int main()
{
    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a>>b;
    add ob1 = add(a,b);
    cout<<"Enter 2nd number: ";
    cin>>a>>b;
    add ob2 = add(a,b);
    ob1.addition(ob2);
}
