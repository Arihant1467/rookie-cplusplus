#include <iostream>
#include<vector>
using namespace std;

int main()
{
    long people,people_1=0;,people_2=0;vector <long> pepl;
    int a=1;char choice='C';
    cin>>people;
    for(;people_1<people;++people_1)
    {
        pepl.push_back(people_1);
    }
    people_1=0;
    while(a!=-1)
    {
        cin>>choice;
        if(choice=='c'||choice=='C')
        {
           cin>>people_1>>people_2;
           pepl[people_2]=pepl[people_1];
        }
        else if(choice=='Q'|| choice =='q')
        {
            cin>>people_1>>people_2;
        }

    }
    return 0;
}
