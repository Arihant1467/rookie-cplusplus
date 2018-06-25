#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a binary number :\t";
    cin>>s;
    int count_1=0;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='1')
        {
            ++count_1;
        }
    }
    if(count_1%2==0)
    {
        cout<<"\n It is a even parity number\n";
    }
    else
    {
        s=s+'1';
        cout<<"\n It is not a even parity number:\t"<<s;
    }
    return 0;
}
