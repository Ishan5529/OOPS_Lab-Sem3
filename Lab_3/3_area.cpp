#include <iostream>
using namespace std;

class area
{
    public:
        int l, b;
        area(int x, int y)
        {
            l = x;
            b = y;
        }
        area(int s)
        {
            l = s;
            b = s;
        }
        ~area()
        {
            cout<<"Area: "<<(l*b)<<endl;
        }

};
int main()
{
    int a,b,ch;
    cout<<"1) Rectangle\n2) Square\n\nEnter Choice [1/2]: ";
    cin>>ch;
    if (ch == 1)
    {
        cout<<"\n\nEnter Length and Breadth: ";
        cin>>a>>b;
        area rec = area(a,b);
    }
    else if (ch == 2)
    {
        cout<<"\n\nEnter Side: ";
        cin>>a;
        area sq = area(a);
    }
    else
        cout<<"Invalid Choice";
    return 0;
}
