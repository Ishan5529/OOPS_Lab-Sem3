#include <iostream>
using namespace std;
class Student
{
    public:
        int id;
        float gpa;
        string branch;
        Student(int a, float b, string c)
        {
            id = a;
            gpa = b;
            branch = c;
        }
        ~Student()
        {
            cout<<"ID: "<<id<<endl;
            cout<<"Branch: "<<branch<<endl;
            cout<<"CGPA: "<<gpa;
        }
};
int main()
{
    int id;
    float gpa;
    string branch;
    cout<<"Enter ID, Branch and CGPA: ";
    cin>>id>>branch>>gpa;
    Student s1 = Student(id, gpa, branch);
}
