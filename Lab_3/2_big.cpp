#include <iostream>
using namespace std;

class big
{
    public:
        float a;
        big(float y)
        {
            a = y;
        }
        void bigger(big ob)
        {
            if (a > ob.a)
                cout<<a<<" is bigger.";
            else
                cout<<ob.a<<" is bigger.";
        }
};
int main()
{
    float a, b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    big ob1 = big(a);
    big ob2 = big(b);
    ob1.bigger(ob2);
}
