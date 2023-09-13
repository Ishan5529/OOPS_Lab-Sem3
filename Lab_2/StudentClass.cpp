//1.  Create a student class inside it take its id, branch and address
#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int id;
        string branch;
        string address;
    Student()
    {
        id = -1;
        branch = "N/A";
        address = "N/A";
    }
    void printdet()
    {
        cout<<endl<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"Address: "<<address<<endl;
    }

};

int main()
{
    Student ob = Student();
    cout<<"Enter ID: ";
    cin>>ob.id;
    cout<<"Enter Branch: ";
    cin>>ob.branch;
    cout<<"Enter Address: ";
    cin>>ob.address;
    ob.printdet();
    return 0;
}
