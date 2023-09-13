//5.  Print ASCII value of a character
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"ASCII Values of Digits:"<<endl;
    int i;
    for (i='0'; i<='9'; i++)
        cout<<i<<"  ";
    cout<<endl<<endl<<"ASCII value of alphabets(Uppercase): "<<endl;
    for (i='A'; i<='Z'; i++)
        cout<<i<<"  ";
    cout<<endl<<endl<<"ASCII value of alphabets(Lowercase): "<<endl;
    for (i='a'; i<='z'; i++)
        cout<<i<<"  ";
    return 0;
}
